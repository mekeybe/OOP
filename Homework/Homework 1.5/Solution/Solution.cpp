#include <iostream>
#include <stdio.h>

using namespace std;

struct Book
{
    char title[100];
    int page;
    float price;
};

void addPrice(struct Book& A, float x)
{
    A.price += x;
    std::cout << "Price after changing: " << A.price << endl;
}

int main()
{
    float x;
    Book A = { "The Tale", 230, 245.2};
    std::cout << "Input number: ";
    cin >> x;
    std::cout << "Price before changing: " << A.price << endl;
    addPrice(A, x);
}
