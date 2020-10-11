//8.	Replace the first character of the string using “Return by reference”.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A


#include<iostream>
using namespace std;

string Stringreplace(string &str1)
{
	str1.replace(0,1,"H");
	return str1;
}

int main()
{
	string str1="This";
	cout<<"Replacing String: "<<Stringreplace(str1);
	return 0;
}
