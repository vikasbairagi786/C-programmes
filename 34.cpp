/* 34.	Write a program using pointer to pointer. Create a class Bill. Take data members Quantity, Price and Total. Calculate total (Quantity * Price) in QtyCal functions.
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
	Bill** PointerToPointer;

	PointerToObject = &BillsObject;
	PointerToPointer = &PointerToObject;

	std::cout << "Enter The Quantity : ";
	std::cin >> (*PointerToPointer)->Quantity;

	std::cout << "Enter The Price : ";
	std::cin >> (*PointerToPointer)->Price;

    std::cout << "---------------------------------";

	std::cout << "\nThe Total Of Quantity * Price : " << (*PointerToPointer)->QtyCal((*PointerToPointer)->Quantity, (*PointerToPointer)->Price);

	return 0;
}
