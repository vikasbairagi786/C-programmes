//24.	Calculate area of circle, rectangle, triangle and square using Function Overloading.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A

#include<iostream>
#define PI 3.14
using namespace std;

float Operation(float Radius) {
    return PI * Radius * Radius;   // Area Of Circle
}

float Operation(float Width , float Hight) {
    return Width * Hight;   // Area Of Ractangle
}

double Operation(double Base , double VerticalHight) {
    return (0.5) * Base * VerticalHight;    // Area Of Triangle
}

int Operation(int Side) {
    return Side * Side;     // Area Of Square
}

int main() {
    int USER_INPUT;
    cout << "What Would You Like To Find Out ?" << endl << "===================================" << endl << "1. Area Of Circle" << endl << "2. Area Of Ractangle" << endl << "3. Area Of Triangle" << endl << "4. Area Of Square" << endl;
    cout << endl << "Enter Your Choice Here : ";
    cin >> USER_INPUT;

    switch (USER_INPUT) {

    case 1:
        float Radius;

        cout << endl << "Enter The Radius of Circle : ";
        cin >> Radius;

        cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

        cout << "The Area Of Circle is : " << Operation(Radius) << endl;

        break;

    case 2:
        float Width, Hight;

        cout << endl << "Enter The Width Of Ractangle : ";
        cin >> Width;
        cout << "Enter The Hight of Ractangle : ";
        cin >> Hight;

        cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

        cout << "The Area Of Ractangle : " << Operation(Width,Hight) << endl;
        break;

    case 3:
        double Base , VerticalHight;

        cout << endl << "Enter The Base Of The Triangle : ";
        cin >> Base;
        cout << "Enter The Vertical Hight Of The Triangle : ";
        cin >> VerticalHight;

        cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

        cout << "The Area Of Triangle is : " << Operation(Base,VerticalHight) << endl;
        break;

    case 4:
        int Side;

        cout << endl << "Enter The Side Of Square : ";
        cin >> Side;

        cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

        cout << "The Area Of Square is : " << Operation(Side) << endl;
        break;

    default: cout << endl << "Invalid Input Error !!" << endl;
        break;
    }

    return 0;
}
