#include <iostream>
using namespace std;
class unary
{
   int a=10,b=20,c;
	public:
	 void getvalues()
	 { 
	    cout<<"Enter Values of a,b:\n";
	    cout<<a<<"\n"<<b<<"\n"<<endl;
	 }	
	 void show()
	 {
	     cout<<"sum of numbers:"<<c;
	 }
	 //friend function overloading
	 void friend operator + (unary &x); //pass by reference 
};
void operator + (unary &x)
{
	x.c = x.a + x.b ;
}
int main()
{
	unary x1;
	x1.getvalues();
	cout<<"After Overloading:\n";
	+x1;
	x1.show();
	return 0;
}

