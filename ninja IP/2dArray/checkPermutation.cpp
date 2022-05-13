#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[])
{
	int str1 = strlen(input1);
	int str2 = strlen(input2);
	if (str1 != str2)
	{
		return false;
	}

	int freqArray[256] = {0}; // initializing our FreqArray to store the how many time so a char is present.
	int i;

	for (i = 0; input1[i] && input2[i]; i++) // till one of the input array don't have a value and return false to the condition
	{
		freqArray[input1[i]]++; // first adding count to ith position of freqArray
		freqArray[input2[i]]--; // than substracting count on ith position of freqArray if both are equal than the result will be back to zero
	}

	for (i = 0; i < 256; i++)
	{
		if (freqArray[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int size = 1e6;
	char str1[size];
	char str2[size];
	cin >> str1 >> str2;
	cout << (isPermutation(str1, str2) ? "true" : "false");
}