//2.	Create a class programming with two methods. Input_value for getting value of data and output_value for printing data using class and objects.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

class sample{
	public:
		int a,b;
		void get_value(void){
			cout<<"Enter the value a:";
			cin>>a;
			cout<<"Enter the value b:";
			cin>>b;
		}
		void put_value(void){
			cout<<"value of a "<<a<<endl;
			cout<<"value of b "<<b<<endl;
		}
};

int main(){
	sample s1;
	s1.get_value();
	s1.put_value();
	return 0;
}
