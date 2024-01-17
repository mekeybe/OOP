#include <iostream>
#include <stdio.h>

using namespace std;

struct Book
{
    char title[100];
    int pages;
    float price;
};

bool isExpensive(struct Book const& A)
{
    if (A.price > 1000)
        return true;
    else
        return false;
}

int main()
{
    float x;
    string str;
    Book A = { NULL, NULL, NULL };
    cout << "Input title: ";
    cin >> str;
    strcpy_s(A.title, str.c_str());
    cout << "Input number of pages and price: ";
    cin >> A.pages >> A.price;
    cout << "Is book expensive? ";
    if (isExpensive(A))
        cout << "Yes!" << endl;
    else
        cout << "No!" << endl;
}