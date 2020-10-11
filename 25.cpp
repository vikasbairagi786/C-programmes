/*25.Find the Area of circle using Friend Function
  Name:  Vikas Bairagi
  En No: 190510101007
        */
#include <iostream>
using namespace std;

class areaofcircle
 {
 	  int r;
 	public:
 		void get()
 		 {
 		 	cout<<"Enter radius:";
 		 	cin>>r;
		 }
		 friend float calculate(areaofcircle ob);  //declaring friend function
 };

 float calculate (areaofcircle ob)
  {
  	return 3.14*ob.r*ob.r;
  }

int main()
 {
 	areaofcircle ob1;
 	ob1.get();
 	cout<<"Area of Circle:"<<calculate(ob1);  //calling friend function as normal function
 	return 0;
 }
