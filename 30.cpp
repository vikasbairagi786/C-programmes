/*  30.	Write a C++ program to create a class called STUDENT with data members EnrlNO, Name & Sem. Using inheritance, create the classes INTERNAL & EXTERNAL having fields as marks wise average marks for all INTERNAL & EXTRENAL exams separately.
  Name:  Vikas Bairagi
  En No: 190510101007
         */
#include<iostream>
using namespace std;

class student
{
	public:
		char name[50];
		int enrollno,marks;
		void read_student_details();
};
class internals:public student
{
	public:
		int semester;
		void read_data();
};
class externals:public student
{
	public:
		int semester;
		void read_data();
};
void student::read_student_details()
{
	cout<<"\nEnter The Values :-"<<"\n->Name :-";
	cin>>name;
	cout<<"->Enrollment no. :-";
	cin>>enrollno;
	cout<<"->Total Marks :-";
	cin>>marks;
}
void internals::read_data()
{
	read_student_details();
	cout<<"->Semester :-";
	cin>>semester;
}
void externals::read_data()
{
	read_student_details();
	cout<<"->Semester :-";
	cin>>semester;
}
int main()
{
	internals in[21];
	externals ex[21];
	int n,i;
	cout<<"Enter The Number Of Students For Internal Exam:";
	cin>>n;
	cout<<"\nEnter The Student Details:";
	for(i=1;i<=n;i++)
	{
		in[i].read_data();
	}
	cout<<"Average Marks For Internal Exam Semester Wise Is :-"<<"\n\n\n";
	cout<<"\tSemester\tAverage_marks"<<"\n";
	for(int sem=1;sem<=6;sem++)
	{
		float sum = 0;
		int found = 0;
		int count = 0;
		for(i=1;i<=n;i++)
		{
			if(in[i].semester == sem)
			{
				sum = sum + in[i].marks;
				found = 1;
				count ++;
			}
		}
		if(found ==1)
		{
			cout<<"\t"<<sem<<"\t\t"<<sum/count<<"\n";
		}
		else
		{
			cout<<"\t"<<sem<<"\t\t"<<"0"<<"\n";
		}
	}

	cout<<"Enter The Number Of Students For External Exam:";
	cin>>n;
	cout<<"\nEnter The Student Details:";
	for(i=1;i<=n;i++)
	{
		ex[i].read_data();
	}
	cout<<"Average Marks For External Exam Semester Wise Is :-"<<"\n\n\n";
	cout<<"\tSemester\tAverage_marks"<<"\n";
	for(int sem=1;sem<=6;sem++)
	{
		float sum = 0;
		int found = 0;
		int count = 0;
		for(i=1;i<=n;i++)
		{
			if(ex[i].semester == sem)
			{
				sum = sum + ex[i].marks;
				found = 1;
				count ++;
			}
		}
		if(found ==1)
		{
			cout<<"\t"<<sem<<"\t\t"<<sum/count<<"\n";
		}
		else
		{
			cout<<"\t"<<sem<<"\t\t"<<"0"<<"\n";
		}
	}
}
