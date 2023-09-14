#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

void cubeR(const int& x)
{
    int y = pow(x, 3);
    cout << "Output: " << y << endl;
}

int main()
{
    int x;
    cout << "Input number: ";
    cin >> x;
    cubeR(x);
}