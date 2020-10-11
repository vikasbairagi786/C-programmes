//11.	Even or odd. Program to enter an integer and find out if it is even or odd

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A

#include<iostream>
using namespace std;

int main() {

    int VALUE , REMAINDER;
    cout << "Enter The VALUE : ";
    cin >> VALUE;
    REMAINDER = VALUE % 2;
    if(REMAINDER == 0) {
        cout << VALUE << " is Even !! " << endl;
    }
    else {
        cout << VALUE << " is Odd !! " << endl;
    }
    return 0;
}
