//7.	Find the maximum number using “Return by reference”.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

int maximum(int &no1,int &no2){
	if(no1>=no2){
		return no1;
	}
	else{
		return no2;
	}
}

int main(){
	int no1,no2;
	cout<<"Enter Number 1:";
	cin>>no1;
	cout<<"Enter Number 2:";
	cin>>no2;
	cout<<"Maximum Number: "<<maximum(no1,no2);
	return 0;
}
