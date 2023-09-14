#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

namespace myspace
{
    void printNTimes(const char* str, unsigned int n)
    {
        ostringstream repeated;
        fill_n(ostream_iterator<string>(repeated), n, str);
        cout << "Output: " << repeated.str() << endl;
    }
}

using myspace::printNTimes;

int main()
{
    string str;
    unsigned int n;
    cout << "Input your line and the number of repetitions: ";
    cin >> str >> n;
    printNTimes(&str[0], n);
}
