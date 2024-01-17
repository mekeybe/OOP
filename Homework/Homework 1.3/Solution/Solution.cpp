#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int cubeR(const int& x)
{
    int result = pow(x, 3);
    return result;
}

int main()
{
    int x;
    cout << "Input number: ";
    cin >> x;
    cout << "Output: " << cubeR(x) << endl;
}