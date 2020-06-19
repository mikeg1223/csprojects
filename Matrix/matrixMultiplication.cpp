#include <iostream>
#include <cstdlib>

using namespace std;

class matrixM
{
	public:
		matrixM();
		matrixM(int m);
		matrixM(int m, int n);
		matrixM(matrixM& copy);
		~matrixM();
		
		matrixM& operator *(matrixM& right);
		matrixM& operator +(matrixM& right);
		matrixM& operator = (matrixM& right);
		friend istream& operator >> (istream& in, matrixM& right);
		friend ostream& operator << (ostream& out, matrixM& right);
		int* operator [] (int index);

		int* getSize();

		int** getArray();

	private:
		int** array;
		int size[2];

};

int main()
{
	matrixM m1(10, 10);
	for(int i = 0; i < 10; ++i)
	{
		for(int j = 0; j < 10; j++)
		{
			if (i == j)
			{
				m1[i][j] = 0;
			}
			else
			{
				m1[i][j] = 1;
			}
		}
	}
	matrixM m2, m3;
	m2 = m1;
	m3 = m1;
	system("clear");
	for (int i = 1; i < 6; ++i)
	{
		m1 = (m1 * m2);
		cout << "A to the " << i+1 << " power: " << endl;
		cout << m1;
		cout << endl;
		m3 = (m3 + m1);
		cout << "sum of powers up to: " << i+1 << endl;
		cout << m3;
		cout << endl;
	}

	return  0;
}
matrixM::matrixM()
{
	size[0] = 1;
	size[1] = 2;
	array = NULL;
}
matrixM::matrixM(int m)
{
	size[0] = m;
	size[1] = m;
	array = new int*[size[0]];
	for(int i = 0; i < size[0]; ++i)
	{
		array[i] = new int[size[1]];
	}
}
matrixM::matrixM(matrixM& copy)
{
	size[0] = copy.getSize()[0];
	size[1] = copy.getSize()[1];
	array = new int*[size[0]];
	for(int i = 0; i < size[0]; ++i)
	{
		array[i] = new int[size[1]];
	}
	for(int i = 0; i < size[0]; ++i)
	{
		for (int j = 0; j < size[1]; ++j)
		{
			array[i][j] = copy[i][j];
		}
	}

}
matrixM::matrixM(int m, int n)
{
	size[0] = m;
	size[1] = n;
	array = new int*[size[0]];
	for(int i = 0; i < size[0]; ++i)
	{
		array[i] = new int[size[1]];
	}
}
matrixM::~matrixM()
{
	for(int i = 0; i < size[0]; ++i)
	{
		delete [] array[i];
		array[i] = NULL;
	}
	delete [] array;
	array = NULL;
}
int* matrixM::getSize()
{
	return size;
}
matrixM& matrixM::operator = (matrixM& right)
{
	if(array != NULL)
	{
		for(int i = 0; i < size[0]; ++i)
		{
			delete [] array[i];
			array[i] = NULL;
		}
		delete [] array;
		array = NULL;
	}
	size[0] = right.getSize()[0];
	size[1] = right.getSize()[1];
	array = new int*[size[0]];
	for(int i = 0; i < size[0]; ++i)
	{
		array[i] = new int[size[1]];
	}
	for(int i = 0; i < size[0]; ++i)
	{
		for (int j = 0; j < size[1]; ++j)
		{
			array[i][j] = right[i][j];
		}
	}
	return *this;
}
matrixM& matrixM::operator +(matrixM& right)
{
	if(array == NULL || right.getArray() == NULL)
	{
		cout << "One or more of these matrices are empty. returning left hand side" << endl;
		return *this;
	}
	else if(size[0] != right.getSize()[0] || size[0] != right.getSize()[1] || size[1] != right.getSize()[0] || size[1] != right.getSize()[1])
	{
		cout << "Cannot add these matrices, returning left side matrix";
		exit(1);
	}
	matrixM* temp;
	temp = new matrixM(size[0], size[1]);
	for(int i = 0; i < temp->getSize()[0]; ++i)
	{
		for (int j = 0; j < temp->getSize()[1]; ++j)
		{
			(*temp)[i][j] = array[i][j] + right[i][j];
		}
	}
	return *temp;
}
matrixM& matrixM::operator *(matrixM& right)
{
	if(array == NULL || right.getArray() == NULL)
	{
		cout << "one or more of these marices are emtpy. returning left hand side" << endl;
		return *this;
	}
	else if(size[0] != right.getSize()[0] || size[0] != right.getSize()[1] || size[1] != right.getSize()[0] || size[1] != right.getSize()[1])
	{
		cout << "Cannot multiply these matrices, returning left side matrix";
		exit(1);

	}
	matrixM* temp;
	temp = new matrixM(size[0], right.getSize()[1]);
	for(int i = 0; i < temp->getSize()[0]; ++i)
	{
		for (int j = 0; j < temp->getSize()[1]; ++j)
		{	(*temp)[i][j] = 0;
			for(int k = 0; k < right.getSize()[1]; ++k)
			{
				(*temp)[i][j] += (array[i][k] * right[k][j]);
			}	
		}
	}
	return *temp;

	
}
istream& operator >> (istream& in, matrixM& right) 
{
	for(int i = 0; i < right.getSize()[0]; ++i)
	{
		for (int j = 0; j < right.getSize()[1]; ++j)
		{
			cout << "Please enter a value for [" << i+1 <<"][" << j+1 <<"]: ";
			in >> right[i][j];
		 	if(in.fail())
			{
				cout << endl << "Entered non number... exiting...";
				exit(1);
			}
		}
	}
	return in;

}
ostream& operator << (ostream& out, matrixM& right)
{
	out << "      ~MATRIX~      " << endl;
	out << "____________________" << endl;
	for(int i = 0; i < right.getSize()[0]; ++i)
	{
		for (int j = 0; j < right.getSize()[1]; ++j)
		{
			out << right[i][j] << "\t";
		}
		out << endl;
	}
	return out;
}
int* matrixM::operator [] (int index)
{
	if( index >= size[0])
	{
		cout << "index out of range... exiting...";
		exit(1);
	}
	return array[index];
}
int** matrixM::getArray()
{
	return array;
}
