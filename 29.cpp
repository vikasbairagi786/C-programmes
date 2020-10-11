/* 29.	Write a C++ program to create a class called STUDENT with data members USN, Name & Age. Using inheritance, create the classes UGSTUDENT & PGSTUDENT having fields as semester wise average age for all UG & PG student separately.
  Name:  Vikas Bairagi
  En No: 190510101007
         */
#include<iostream>
using namespace std;

class student
{
public:
    char name[30];
    int enrolno,age;
    void read_student_details();
};
class ugstudent:public student
{
public:
    int semester,fees;
    void read_data();
};
class pgstudent:public student
{
public:
    int semester,fees;
    void read_data();
};
void student::read_student_details()
{
    cout<<"\nEnter the\n"<<"->Name:";
    cin>>name;
    cout<<"->Enrollment no:";
    cin>>enrolno;
    cout<<"->Age:";
    cin>>age;
}
void ugstudent::read_data()
{
    read_student_details();
    cout<<"->Semester:";
    cin>>semester;
    cout<<"->Fees:";
    cin>>fees;
}

void pgstudent::read_data()
{
    read_student_details();
    cout<<"->Semester:";
    cin>>semester;
    cout<<"->Fees:";
    cin>>fees;
}
int main()
{
    ugstudent ug[21];
    pgstudent pg[21];
    int n,i;
    cout<<"Enter the no. of ugstudents:";
    cin>>n;
    cout<<"\n Enter the ugstudents details";
    for(i=1;i<=n;i++)
    {
        ug[i].read_data();
    }
    cout<<"\nAverage age of ugstudents semester wise is:"<<"\n\n\n";
    cout<<"\tSemester\tAvg_age\n";
    for(int sem=1;sem<=6;sem++)
    {
        float sum=0;
        int found=0;
        int count=0;
        for(i=1;i<=n;i++)
        {
            if(ug[i].semester==sem)
            {
                sum+=ug[i].age;
                found = 1;
                count ++;
            }
        }
        if(found==1)
        {
            cout<<"\t"<<sem<<"\t\t"<<sum/count<<"\n";
        }
        else
        {
            cout<<"\t"<<sem<<"\t\t"<<"0"<<"\n";
        }
    }
    cout<<"Enter the no. of pgstudents:";
    cin>>n;
    cout<<"\n Enter the pgstudents details";
    for(i=1;i<=n;i++)
    {
        pg[i].read_data();
    }
    cout<<"\nAverage age of pgstudents semester wise is:"<<"\n\n\n";
    cout<<"\tSemester\tAvg_age\n";
    for(int sem=1;sem<=4;sem++)
    {
        float sum=0;
        int found=0;
        int count=0;
        for(i=1;i<=n;i++)
        {
            if(pg[i].semester==sem)
            {
                sum+=pg[i].age;
                found = 1;
                count ++;
            }
        }
        if(found==1)
        {
            cout<<"\t"<<sem<<"\t\t"<<sum/count<<"\n";
        }
        else
        {
            cout<<"\t"<<sem<<"\t\t"<<"0"<<"\n";
        }
    }
}
