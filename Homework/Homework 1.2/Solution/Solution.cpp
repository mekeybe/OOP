#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int cubeV(int x)
{
    int cube = pow(x, 3);
    return cube;
}

int main()
{
    int x;
    cout << "Input number: ";
    cin >> x;
    cout << "Output: " << cubeV(x) << endl;
}