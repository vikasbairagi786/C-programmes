/* 27.	Find the area of circle and assign the value of pie in constructor.
  Name:  Vikas Bairagi
  En No: 190510101007
         */
#include <iostream>
using namespace std;

class circle
 {
 	   int r;
 	   float pie,area;
 	public:
 		circle()  //constructor
 		 {
 		    pie=3.14;	//assign the value
		 }
 		void get()
         {
         	cout<<"Enter the Radius:";
         	cin>>r;
         	area=pie*r*r;
		 }

		void show()
		 {
		 	cout<<"Area of Circle:"<<area;
		 }
 };

 int main()
  {
  	circle c;
  	c.get();
  	c.show();
  	return 0;
  }
