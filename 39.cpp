/* Name:  Vikas Bairagi
  En No: 190510101007
      */
#include<iostream>
#include<string.h>
using namespace std;

class compareint
{
	public:
		int a;

		compareint(int x)
		{
			a = x;
		}

		int operator==(compareint s2)
		{
			if(a == s2.a)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
void compare(compareint s1,compareint s2)
	{
		if(s1==s2)
		{
			cout<<s1.a<<" Is Equal To "<<s2.a<<endl;
		}
		else
		{
			cout<<s1.a<<" Is Not Equal To "<<s2.a<<endl;
		}
}
int main()
{
	compareint s1(30);
	compareint s2(15);
	cout<<"\nComparing \""<<s1.a<<"\" and \""<<s2.a<<"\""<<endl;
	compare(s1,s2);
	return 0;
}



