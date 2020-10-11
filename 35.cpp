/*35.	Write a program using pointer to derived class. Create a base class and child class that get and print the values of X and Y.
   Name:  Vikas Bairagi
  En No:  190510101007       */
#include <iostream>

class Base {
protected:
	int X, Y;
};
class Derived : private Base {
public:
	void Get() {
		std::cout << "Enter The Value Of X : ";
		std::cin >> X;
		std::cout << "Enter The Value OF Y : ";
		std::cin >> Y;
	}

	void Print() {
		std::cout << "---------------------------------";
		std::cout << "\nThe Value Of X is : " << X;
		std::cout << "\nThe Value Of Y is : " << Y;
	}
};

int main(int argc, char* argv[]) {
	Derived ObjectOfDerived;
	Derived* PointerOfDerived;

	PointerOfDerived = &ObjectOfDerived;

	(*PointerOfDerived).Get();
	(*PointerOfDerived).Print();

	return 0;
}
