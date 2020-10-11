/* 32.	Print the values and address of array using pointer to array.
  Name:  Vikas Bairagi
  En No: 190510101007
         */
#include <iostream>
using namespace std;
int main()
{
	int arr[5]= {1,2,3,4,5};
	int *pt = arr;
	int (*ptr)[5]=&arr;

	cout<<"pt="<<pt<<",ptr="<<ptr<<endl;
	cout<<"ptr="<<*pt<<",ptr="<<*ptr<<endl;

	return 0;
}
