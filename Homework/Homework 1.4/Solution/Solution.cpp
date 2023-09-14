#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

void countLetters(const char* str, int& numLetters, int& numDigits, int& numOther)
{
    int len = strlen(str);
    for (int i = 0; i <= len; i++)
    {
        if (isalpha(str[i])) numLetters++;
        if (isdigit(str[i])) numDigits++;
        numOther = len - numDigits - numLetters;
    }
    cout << "Number of letters: " << numLetters << endl << "Number of digits: " << numDigits << endl << "Number of other symbols: " << numOther << endl;
}

int main()
{
    string str;
    int numLetters = 0, numDigits = 0, numOther = 0;
    cout << "Input line: ";
    cin >> str;
    countLetters(&str[0], numLetters, numDigits, numOther);
}