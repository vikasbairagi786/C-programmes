//21.	Print the values of number using “protected” data member

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A

#include<iostream>
using namespace std;

class Parent {
    protected:
        int VALUE;
    public:
        void AccessingVALUE(int NUMBER) {
            VALUE = NUMBER;
        }
};

class Child : public Parent {
    public:
        void Display() {
            cout << "You Have Entred The Value " << VALUE << endl;
        }
};

int main() {
    Child PermissionGrantTo;
    int USER_INPUT;
    cout << "Enter the Value : ";
    cin >> USER_INPUT;
    PermissionGrantTo.AccessingVALUE(USER_INPUT);
    PermissionGrantTo.Display();
    return 0;
}
