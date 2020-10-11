//4.	Swapping of two number without using third variable.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A

#include<iostream>
using namespace std;

int main(){
	int number_1,number_2;
	cout<<"Enter Number 1:";
	cin>>number_1;
	cout<<"Enter Number 2:";
	cin>>number_2;
	cout<<"Values Before Swapping:"<<endl;
	cout<<"Number 1: "<<number_1<<endl;
	cout<<"number 2: "<<number_2<<endl;
	number_1=number_1+number_2;
	number_2=number_1-number_2;
	number_1=number_1-number_2;
	cout<<"Values After Swapping:"<<endl;
	cout<<"Number 1: "<<number_1<<endl;
	cout<<"number 2: "<<number_2<<endl;
	return 0;
}
