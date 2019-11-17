#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//linear search
int find(int a[], int size, int target)
{
	for (int i = 0; i < size; ++i)
	{
		if (a[i] == target) return i+1;
	}
	return -1;
}
void swap(int *r, int *s)
{
	int hold = r;
	int r = s;
	int s = hold;
}
void shuffle(int q[], int size)
{
	for (int y = 0; y < size; ++y)
	{
		
	}
	
}
int main()
{
	srand(time(nullptr));
	int n;
	//these work the same;
	/*int a[] = {3,1,4,2,5};
	int b[5] = {3 , 1 , 4 , 2 , 5}; */
	//          0   1   2   3   4   5
	//        begin           last  end
	//        size = end
	//       
	//        last = end - 1
	do
	{
		cout << "Enter a value to count for: ";
		cin >> n;
	} while (n < 1);
	const int m = n;
	int b[m];
	for(int x = 0; x < m; ++x)
	{	cout << "Enter a value: ";
		cin >> b[x];
	}
	int highest = b[0];
	for (int k = 1; k < m; ++k)
	{
		if(b[k] > highest) highest = b[k];
	}
	cout << "Highest value is: " << highest << endl;
	int h = 0;
	cout << "What number do you want to search for? I will tell you it's position in the array (-1 = false): ";
	cin >> h;
	cout << "This number is in array number after a shuffel" <<find(b,m,h) << endl;
	for (int i = 0; i < m; ++i)
	{
		cout << "Printing " <<i + 1 << ": " << b[i] << endl;
	}
	for (int j = m-1; j >= 0; --j)
	{
		cout << "Printing " << j+1 << ": " << b[j] << endl;
	}
	return 0;
}
