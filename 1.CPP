//1.	C++ program to create a simple class and object and print “HELLO”.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

class A{
	public:
		void print_Hello(){
			cout<<"Hello World";
		}
};

int main(){
	A a1;
	a1.print_Hello();
	return 0;
}
