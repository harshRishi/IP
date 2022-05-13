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

void reverseString(char input[])
{
	int start = 0, end = length(input) - 1;
	while (start < end)
	{
		char temp = input[start];
		input[start] = input[end];
		input[end] = temp;
		start++;
		end--;
	}
}

int main()
{
	char input[100];
	cin.getline(input, 100);
	
	reverseString(input);
	cout << input << endl;
}