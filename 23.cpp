//23.	Sum, difference, product and quotient of two integers. C++ Program to find the sum, difference, product and quotient of two integers using INLINE function.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

inline float SUM(float FIRST, float SECOND) {
    return FIRST + SECOND;
}

inline float DIFFERENCE(float FIRST, float SECOND) {
    return FIRST - SECOND;
}

inline float PRODUCT(float FIRST, float SECOND) {
    return FIRST * SECOND;
}

inline float QUOTIENT(float FIRST, float SECOND) {
    return FIRST / SECOND;
}


int main()
{
    float FIRST , SECOND ;


    cout << "Enter The First Number : ";
    cin >> FIRST ;
    cout << "Enter The Second Number : ";
    cin >> SECOND;
    cout << "Sum is : " << SUM(FIRST,SECOND) << endl;
    cout << "Difference is : " << DIFFERENCE(FIRST,SECOND) << endl;
    cout << "Product is : " << PRODUCT(FIRST,SECOND) << endl;
    cout << "Quotient is : " << QUOTIENT(FIRST,SECOND) << endl;
    return 0;
}
