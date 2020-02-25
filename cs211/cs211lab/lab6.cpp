#include <iostream>
#include <fstream>

typedef int testarray[12];
typedef int hwarray[13];

void sort(double hold[], int len);
void swap(double m[][], double n[][]);

int main()
{
	ifstream fin;
	ofstream fout;
	string student[2] = "";
	double test[2][12] = {};
	double hw[2][13] = {};
	fin.open("StudentData.txt");
	if(fin.fail())
	{
		exit(1);
	}
	for(int i = 0; i < 2; ++i)
	{
		fin >> student[i];
		for(int j = 0; i < 12; ++i)
		{
			fin >> test[i][j];		
		}
		for(int j = 0; i < 13; ++i)
		{
			fin >> hw[i][j];
		}
	}
	fin.close();
	sort(test, 12);
	sort(hw, 13);
	int score[2];
	for(int i = 0; i < 2; ++i)
	{
		for(int j = 0; j < 10; ++j)
		{
			score[i] += test[i][j];
			score[i] += hw[i][j];
		}
	}
	fout.open("labScore.txt");
	if(fout.fail())
	{
	exit(1);
	}
	for(int i = 0; i < 2; ++i)
	{
		fout << s[i] << " ";
		fout << score[i] << endl;
	}
	fout.close();
	return 0;
}
void sort(double hold[][], int len)
{
	for(int num = 0; num < 2; ++num)
	{
		for(int j = 0; j < len; ++j)
		{
			for(int i = len; i > j+1 ; --i)		
			{
				if(hold[num][i] > hold[num][(i-1)])
				{
					swap(hold[num][i], hold[num][(i-1)]);
				}
			}
		}
	}
}
void swap(double m[][], double n[][])
{
	double hold = *m;
	*m = *n;
	*n = hold;
}
