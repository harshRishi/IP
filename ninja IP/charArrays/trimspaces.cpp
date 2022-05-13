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

void trimSpaces(char input[])
{
	int i = 0, j = 0;
	while (i < length(input))
	{
		if (input[i] != ' ')
		{
			input[j] = input[i];
			j++;
		}
		i++;
	}
	input[j] = '\0'; // at the end we want tu put \0 so that we can terminate the string if we don't do this, string will read the copied val which are now place before spaces
}

int main()
{
	char input[1000000];
	cin.getline(input, 1000000);
	trimSpaces(input);
	cout << input << endl;
}
