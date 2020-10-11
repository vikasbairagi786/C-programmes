/*26.	Find the Addition of two numbers using Friend Function
  Name:  Vikas Bairagi
  En No: 190510101007
          */
#include <iostream>
using namespace std;

class addition
 {
 	  int a,b;
 	public:
 		void get()
 		 {
 		 	cout<<"Enter value of a:";
 		 	cin>>a;
 		 	cout<<"Enter value of b:";
 		 	cin>>b;
		 }
		 friend int add(addition ob);  //declaring friend function
 };

 int add (addition ob)
  {
  	return ob.a+ob.b;
  }

int main()
 {
 	addition ob1;
 	ob1.get();
 	cout<<"Addition of two number:"<<add(ob1);  //calling friend function as normal function
 	return 0;
 }
