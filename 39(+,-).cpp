/*39.	Write a program of increment and decrement operator using unary operator overloading.
  Name:  Vikas Bairagi
  En No: 190510101007      */
#include <iostream>
using namespace std;
class unary
{
	public:
		int a,b;
		void getdata()
		{
			cout<<"Enter 2 integer:";
			cin>>a>>b;
		}
		int operator ++()
		{
			++a;
			++b;
		}
		int operator --()
		{
			--a;
			--b;
		}
		void showdata()
		{
			cout<<"Value of A:"<<a<<endl;
			cout<<"Value of B:"<<b<<endl;
		}
};
int main()
{
	unary a1;
	a1.getdata();
	--a1;
	cout<<"After decrementing value:"<<endl;
	a1.showdata();
	++a1;
	++a1;
	cout<<"Afer increment the value:"<<endl;
	a1.showdata();
	return 0;


}

