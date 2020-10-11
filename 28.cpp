/*28.	Pass the values in constructor and find the difference between two numbers.
  Name:  Vikas Bairagi
  En No: 190510101007
         */
#include <iostream>
using namespace std;

class difference
 {
 	public:
 		int a,b;
 	public:
 		difference()
 		  {
 		  	a=10;
 		  	b=8;
		   }
 };

int main()
 {
 	difference d;
 	cout<<"Difference is:"<<d.a-d.b;
 	return 0;
 }

