//13.	Prime or composite. Program to enter an integer and print if it is prime or composite.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A

#include <iostream>
using namespace std;

int main() {

   unsigned int NUMBER;
   int Iteraion;
   bool isPrime = true;


   cout << "Enter a Positive Integer: ";
   cin >> NUMBER;

   for (Iteraion = 2 ; Iteraion <= NUMBER / 2 ; ++Iteraion) {
      if (NUMBER % Iteraion == 0) {
         isPrime = false;
         break;
      }
   }

   if (isPrime)
      cout << NUMBER << " is a Prime Number." << endl;
   else
      cout << NUMBER << " is a Composite." << endl;

   return 0;
}
