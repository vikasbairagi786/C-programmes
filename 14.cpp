//14.	Sum, difference, product and quotient of two integers. C++ Program to find the sum, difference, product and quotient of two integers.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

int main()
{
    float FIRST , SECOND ;
    float SUM , DIFFRANCE , PRODUCT , QUOTIENT;

    cout << "Enter The First Number : ";
    cin >> FIRST ;
    cout << "Enter The Second Number : ";
    cin >> SECOND;

    SUM = FIRST + SECOND ;
    DIFFRANCE = FIRST - SECOND ;
    PRODUCT = FIRST * SECOND ;
    QUOTIENT = FIRST / SECOND ;

    cout << "Sum is : " << SUM << endl;
    cout << "Diffrence is : " << DIFFRANCE << endl;
    cout << "Peoduct is : " << PRODUCT << endl;
    cout << "Quotient is : " << QUOTIENT << endl;

    return 0;
}
