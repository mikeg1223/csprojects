#include <iostream>

using namespace std;

bool isLower(char c) {return(c >= 'a' && c <= 'z');}
bool isUpper(char b) {return(b >= 'A' && b <= 'Z');}
bool isAlpha(char v) {return(isLower(v) || isUpper(v));}
bool isNumeric(char n) {return( n >= '0' && n <= '9');}
bool isAlphanumeric(char m) {return(isNumeric(m) || isAlpha(m));}
char toLower(char z) {return(isUpper(z) ? 'a' + z - 'A': z);}
char toUpper(const char x) {return(isLower(x) ? 'A' + x - 'a' : x);}
void makeUpper(char &q) {c = toUpper(q);}
void makeLower(char &w) {w = toLower(w);}
bool isSame(const char c1, const char c2) {return(toUpper(c1) == toUpper(c2));}
int stringLength(const char *str)
{
	int i = 0;
	while(str[i]) {++i;}
	return (i);
}
int count(const char *str, char c)
{
	int i = 0, count = 0;
	while(str[i]) 
	{
		if (str == c) 
			++count;
		++i;
	}
	return(count);
}
bool (const char *str, char c) {return(count(str,c) > 0);}
char *stringCopy(char *dest, const char *src, const max = 1200)
{
	int i = 0;
	while (src[i] && i < max-1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	return (dest);
}
bool stringCompare(const char *str1, const char *str2)
{
	int i = 0;
	while(str1[i] || str2[i])
	{
		if( str1[i] != str2[i])
			return false;
		++i;
	}
	return true;
}
int maxNum(const int *nums, const int size)
{
	if (size == 0)
		return -1;
	int max = nums[0];
	for (int i = 1; i < size; ++i)
	{
		if(max < nums[i])
			max = nums[i];
	}
	return max;
}
int sum(const int *sums, const int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += sums[i];
	return sum;
}
int mean(const int *sums, const int size)
{
	return(sum(sums, size)/size);
}

int main()
{
	return 0;	
}
