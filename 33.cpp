/* 33.	Write a program using pointer to object. Create a class Bill. Take data members Quantity, Price and Total. Calculate total (Quantity * Price) in QtyCal functions.
  Name:  Vikas Bairagi
  En No: 190510101007
         */
#include <iostream>

class Bill {
public:
	int Quantity, Price, Total;
public:
	int QtyCal(int Quantity, int Price) {
		Total = Quantity * Price;
		return Total;
	}
};

int main(int argc, char* argv[]) {
	Bill BillsObject;
	Bill* PointerToObject;
	PointerToObject = &BillsObject;

	std::cout << "Enter The Quantity : ";
	std::cin >> PointerToObject->Quantity;

	std::cout << "Enter The Price : ";
	std::cin >> PointerToObject->Price;

    std::cout << "---------------------------------";

	std::cout << "\nThe Total Of Quantity * Price : " << PointerToObject->QtyCal((*PointerToObject).Quantity, (*PointerToObject).Price);

	return 0;
}
