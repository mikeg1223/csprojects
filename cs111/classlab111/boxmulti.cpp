#include <iostream>

using namespace std;

int matr1[3][2] = {{1,2},{3,4},{5,6}}, matr2[2][3] = {{1,6,3},{2,5,4}};

int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

const int n = 3, m = 2;
int b[3][3] = {{8,1,6},{3,5,7},{4,9,2}};

void cmatrix(int x[n][n], int c)
{
	for(int i = 0; i < 3; ++i)
	{ 
		for(int j = 0; j < 3; ++j)
		{
			a[i][j] = a[i][j] *c;
			cout << a[i][j] << " ";
		}
	cout << endl;
	}

}
void mxm(int j[n][m], int k[m][n])
{
	cout << "{ ";
	for(int i = 0; i < m; i++)
	{
		cout << "{"
		for(int j = 0; j < n; j++)
		{
			cout <<  
		}
	}	
}
int determinate(int y[n][n])
{
	return (y[0][0]*((y[1][1]*y[2][2]) - (y[1][2]*y[2][1])) - y[0][1]*((y[1][0]*y[2][2]) - (y[1][2]*y[2][0])) + y[0][2]*((y[1][0]*y[2][1]) - (y[2][0]*y[1][1])));
}
int main()
{
	return 0;
}
