//16.	Biggest integer using IF. Program to enter three integers and output the biggest integer using IF.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A

#include<iostream>
using namespace std;

int main() {

    unsigned int FIRST;
    unsigned int SECOND;
    unsigned int THIRD;
    cout << "Enter The FIRST Number : ";
    cin >> FIRST;
    cout << "Enter The SECOND Number : ";
    cin >> SECOND;
    cout << "Enter The THIRD Number : ";
    cin >> THIRD;

    if (FIRST > SECOND ) {

        if (FIRST > THIRD) {
            cout << FIRST << " is the LARGEST Number." << endl;
        }
        else {
            cout <<  THIRD << " is the LARGEST Number." << endl;
        }
    }
    else {
        cout << SECOND << " is the LARGEST Numver." << endl;
    }

    return 0;

}
