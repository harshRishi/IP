#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[])
{
	int freqArray[256] = {0};
	char ans = input[0];
	int len = strlen(input); // very Important {here we stored this in len because if we try to use it directly in the loop then this will increase the complexcity by n^2 by calling strlen function for every ittaration}

	for (int i = 0; i < len; i++)
	{
		freqArray[input[i]]++;
	}
	int count = freqArray[ans];
	for (int i = 0; i < len; i++)
	{
		if (freqArray[input[i]] > count){
			ans = input[i];
		}
	}
	return ans;
}

int main()
{
	int size = 1e6;
	char str[size];
	cin >> str;
	cout << highestOccurringChar(str);
}