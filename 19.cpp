//19.	Addition of two numbers using “public” data and public member function.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

class Arithmetic {
    public:
        int Addition(int NUMBER_1, int NUMBER_2) {
            cout << "The Addition Of Two Number is : " << NUMBER_1 + NUMBER_2 << endl;
            return 0;
        }
};

int main() {
    Arithmetic Operation;
    int NUMBER_1 , NUMBER_2;
    cout << "Enter The First Integer For Addition : ";
    cin >> NUMBER_1;
    cout << "Enter The Second Integer For Addition : ";
    cin >> NUMBER_2;
    Operation.Addition(NUMBER_1,NUMBER_2);
    return 0;
}
