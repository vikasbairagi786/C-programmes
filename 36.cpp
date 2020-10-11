/*36.	Write a C++ program to create a class STRING and implement the following operations. Display the results after every operation by overloading the operator <<.
STRING s1="Hello"

STRING s2="World"

STRING s3=s1+s2(Use Copy Constructor)

  Name:  Vikas Bairagi
  En No: 190510101007
    */
#include <iostream>
#include <string.h>
using namespace std;

class String
{
	char name[20];
	public:
		String()
		{
			name[20]='\0';
		}
		String (char s[])
		{
			strcpy(name,s);
		}
	/*	String (string &s)
		{
			strcpy(name,s.name);
		}*/
		friend string operator + (String s1,String s2);
		friend ostream & operator <<(ostream &out,String &s);
};
ostream & operator <<(ostream &out,String &s)
{
   cout<<"\t"<<s.name<<endl;
   return (out);
}
string operator + (String s1,String s2)
{
	//string temp(s1);
	strcat(s1.name,s2.name);
	//return (temp);
}
int main()
{
	string s1("Hello");
	string s2("World!");
	string s3 = s1+s2;
	cout<<"\nFirst String=\t"<<s1<<"\nSecond String=\t"<<s2<<"\nThird String=\t"<<s3;
	return 0;
}
