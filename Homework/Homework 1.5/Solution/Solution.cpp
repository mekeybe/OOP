#include <iostream>
#include <stdio.h>

using namespace std;

struct Book
{
    char title[100];
    int pages;
    float price;
};

void addPrice(struct Book& A, float x)
{
    A.price += x;
}

int main()
{
    float x;
    string str;
    Book A = { NULL, NULL, NULL };
    cout << "Input number: ";
    cin >> x;
    cout << "Input title: ";
    cin >> str;
    strcpy_s(A.title, str.c_str());
    cout << endl << "Input number of pages and price: ";
    cin >> A.page >> A.price;
    cout << "Price before changing: " << A.price << endl;
    addPrice(A, x);
    cout << "Price after changing: " << A.price << endl;
}
