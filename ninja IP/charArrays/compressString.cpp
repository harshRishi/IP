#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string getCompressedString(string &input)
{
	int n = input.length();
	string output;
	for (int i = 0; i < n; i++)
	{
		int count = 1;
		while (i < n - 1)
		{
			if (input[i] == input[i + 1])
			{
				count++;
				i++;
			}
			else
			{
				break;
			}
		}

		if (count == 1)
		{
			// cout << input[i];
			output += input[i]; // here if we want to add something in output string we need to use outPut += input[i], and this is the way to add something to the arrays
		}
		else
		{
			// cout << input[i] << count;
			output += input[i];
			output += (count + 48);
		}
	}
	return output;
}

int main()
{
	int size = 1e6;
	string str;
	cin >> str;
	str = getCompressedString(str);
	cout << str << endl;
}