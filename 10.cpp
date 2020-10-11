//10.	Perform the arithmetic operations using “INLINE” functions.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

inline int sum(int a,int b){
	return (a+b);
}

inline int subtract(int a,int b){
	return (a-b);
}

inline int product(int a,int b){
	return (a*b);
}

inline float divide(int a,int b){
	return (a/b);
}

int main(){
	int no1,no2;
	cout<<"Enter Number 1:";
	cin>>no1;
	cout<<"Enter Number 2:";
	cin>>no2;
	cout<<"Sum is "<<sum(no1,no2)<<endl;
	cout<<"Subtract is "<<subtract(no1,no2)<<endl;
	cout<<"Product is "<<product(no1,no2)<<endl;
	cout<<"Divide is "<<divide(no1,no2)<<endl;
	return 0;
}
