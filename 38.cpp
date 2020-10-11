/*  38.	Write a program of comparison of two numbers using operator overloading.
  Name:  Vikas Bairagi
  En No: 190510101007    */
#include <iostream>
#include <string.h>
using namespace std;

class comparestring
{
	public:
		char str[30];
		comparestring(char str1[])
		{
			strcpy(str,str1);
		}

		int operator== (comparestring s2)
		 {
		 	if (strcmp(str,s2.str)==0)
		 	{
		 		return 1;
			}
			else
			{
				return 0;
			}
		 }
	};
	   void compare(comparestring s1,comparestring s2)
	   {
	   	 if(s1==s2)
	   	 {
	   	 	cout<<s1.str<<"is equal to"<<s2.str<<endl;
		 }
		 else
		 {
		 	cout<<s1.str<<"is not equal to"<<s2.str<<endl;
		 }
	   }

int main()
{
	char str1[]="C++";
	char str2[]="c++";
	comparestring s1(str1);
	comparestring s2(str2);
	cout<<"\nComparing"<<s1.str<<"\"and\""<<s2.str<<"\""<<endl;
	compare(s1,s2);
	return 0;
}







