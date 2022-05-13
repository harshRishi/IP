#include <iostream>
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

void reverseStringWordWise(char input[])
{
	reverseString(input, 0, length(input) - 1);
	for (int i = 0; i < length(input);)
	{
		int end = i;
		while (input[end] && input[end] != ' ')
		{
			end++;
		}
		end--;
		reverseString(input, i, end);
		i = end + 2;
	}
}

int main()
{
	char input[1000];
	cin.getline(input, 1000);
	reverseStringWordWise(input);
	cout << input << endl;
}