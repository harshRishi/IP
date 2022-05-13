#include <iostream>
#include <cstring>
using namespace std;

int length(char input[])
{
	int count = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

bool checkPalindrome(char str[])
{
	int n = length(str);
	int start = 0, end = n - 1;
	while (start <= end)
	{
		if (str[start] != str[end])
		{
			return false;
		}
		start++;
		end--;
	}
	return true;
}

int main()
{
	int size = 1e6;
	char str[size];
	cin >> str;
	cout << (checkPalindrome(str) ? "true" : "false");
}