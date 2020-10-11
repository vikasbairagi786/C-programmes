/*37.	Write a program of addition of two string using + operator overloading.
   Name:  Vikas Bairagi
  En No: 190510101007 */
#include <iostream>
#include <string.h>
using namespace std;

class addstring
 {
 	public:
 		char s1[25],s2[25];

 		addstring(char str1[],char str2[])
 		 {
 		 	strcpy(this->s1,str1);
 		 	strcpy(this->s2,str2);
		 }

		void operator + ()
		 {
		 	cout<<"\nConcatination:"<<strcat(s1,s2);
		 }
 };
 int main()
  {
  	char str1[]="This is ";
  	char str2[]=" C++";

  	//Initialize string
  	addstring a1(str1,str2);
  	+a1;
  	return 0;
  }
