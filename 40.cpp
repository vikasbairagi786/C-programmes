/* 40.	Print the values of variable using friend function overloading.
   Name:  Vikas Bairagi
  En No: 190510101007       */
#include <iostream>
using namespace std;
class unary
{
    int a = 10;
	int b = 20;
	int c = 30;
	public:
	 void getvalues()
	 {
	    cout<<"Enter Values of a,b,c:\n";
	    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
	 }
	 void show()
	 {
	 	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
	 }
	 //friend function overloading
	 void friend operator - (unary &x); //pass by reference
};
void operator - (unary &x)
{
	x.a = -x.a;
	x.b = -x.b;
	x.c = -x.c;
}
int main()
{
	unary x1;
	x1.getvalues();
	cout<<"Before Overloading:\n";
	x1.show();
	cout<<"After Overloading:\n";
	-x1;
	x1.show();
	return 0;
}

