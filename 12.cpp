//12.	Sum and average. Program to enter two integers and find their sum and average.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A

#include<iostream>
using namespace std;

int main() {

    int NUMBER_1 , NUMBER_2;
    float SUM , AVERAGE;
    cout << "Enter The First Value : ";
    cin >> NUMBER_1;
    cout << "Enter The Second VAlue : ";
    cin >> NUMBER_2;
    SUM = NUMBER_1 + NUMBER_2;
    AVERAGE = SUM / 2;
    cout << "The SUM is : " << SUM << endl;
    cout << "The AVERAGE is : " << AVERAGE << endl;
    return 0;

}
