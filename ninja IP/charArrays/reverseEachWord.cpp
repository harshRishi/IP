#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char input[], int start, int end)
{
	while (start < end)
	{
		char temp = input[start];
		input[start] = input[end];
		input[end] = temp;
		start++;
		end--;
	}
}

void reverseEachWord(char input[])
{
	int i;
	for (i = 0; i < strlen(input);)
	{
		int start = i;
		while (input[start] && input[start] != ' ')
		{
			start++;
		}
		start--;
		reverseString(input, i , start);
		i = start + 2;
	}
}

int main()
{
	int size = 1e6;
	char str[size];
	cin.getline(str, size);
	reverseEachWord(str);
	cout << str;
}