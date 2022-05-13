#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
	int j = 0;
	for (int i = 0; i <= strlen(input); i++)
	{
		if (input[i] != input[j])
		{
			j++;
			input[j] = input[i];
		}
	}
}

int main()
{
	int size = 1e6;
	char str[size];
	cin >> str;
	removeConsecutiveDuplicates(str);
	cout << str;
}