#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char input[100], input2[100];
    cin.getline(input, 100);
    cin.getline(input2, 100);

    /*
    int len = strlen(input);
    cout << "length: " << len << endl;
    

    if (strcmp(input, input2) == 0){ // this function substracts each value of both the strings
        cout << "true";
    } else {
        cout << "false";
    }

   strcpy(input, input2);
   cout << "Input: " << input << endl;
   */

    strncpy(input, input2, 3);
    cout << input << endl;
}