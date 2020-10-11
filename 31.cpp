/*31.	Write down a program of pointer that accept the values of variable and print the address of that variable
  Name:  Vikas Bairagi
  En No: 190510101007
         */
#include <iostream>
using namespace std;
int main()
{
	int a;
	int *pt;
	a=10;
	pt=&a;
	cout<<"Value of a [a]:"<<a<<endl;
	cout<<"Value of a[*pt]:"<<*pt<<endl;
	cout<<"Value of a [&a]:"<<&a<<endl;
	cout<<"Value of [pt]:"<<pt<<endl;
	cout<<"Value of [&pt]:"<<&pt<<endl;
	return 0;
}
