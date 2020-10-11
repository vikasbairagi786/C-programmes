//3.	Create a class “students”. Create two methods for input and output of students roll number, name, marks1, marks2, marks3, sum of marks and average of marks.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

class student{
	char name[50];
	int rollno;
	int marks1,marks2,marks3;
	int total;
	float avg;
	public:
		void get_data(void);
		void put_data(void);
};

void student :: get_data(void){
	cout<<"Enter the name: ";
	cin>>name;
	cout<<"Enter the rollno: ";
	cin>>rollno;
	cout<<"Enter the marks: ";
	cin>>marks1>>marks2>>marks3;
	total=marks1+marks2+marks3;
	avg=total/3;
}

void student :: put_data(void){
	cout<<"student details:"<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Rollno: "<<rollno<<endl;
	cout<<"marks: "<<endl<<"marks 1:"<<marks1<<endl<<"marks 2:"<<marks2<<endl<<"marks 3:"<<marks3<<endl;
	cout<<"Total Marks="<<total<<endl;
	cout<<"Average="<<avg<<endl;
}

int main(){
	student s1;
	s1.get_data();
	s1.put_data();
	return 0;
}
