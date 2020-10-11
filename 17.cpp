//17.	Compute Net salary of each employee Given that an EMPLOYEE class contains following members: data members: Employee number, Employee name, Basic, DA, IT, Net Salary and print data members. Write a C++ program to read the data of N employee and compute Net salary of each employee (DA=52% of Basic and Income Tax (IT) =30% of the gross salary)

// NAME :- DURANI MAHIRKHAN

// ENROLLMENT :- 190510101033   DIV:-A

#include<iostream>
using namespace std;

class Employee {
    public:

        char EMPLOYEE_NAME[30];
        int EMPLOYEE_NUMBER;
        float DA,IT,BASIC,GROSS_SALARY,NET_SALARY;

        void READ_EMPLOYEE_DETAILS(int Count) {
            cout << endl <<"***************"<< endl;
            cout << "Enter the Employee Number : ";
            cin >> EMPLOYEE_NUMBER;
            cout << "Enter the Employee Name : ";
            cin >> EMPLOYEE_NAME;
            cout << "Enter the basic Salary : ";
            cin >> BASIC;
            cout << "***************"<< endl;
            cout << endl <<"******* Employe : " << Count << " Details are SAVED ********"<< endl ;
        }

        float FIND_NET_SELERY() {
            DA = 0.52 * BASIC;
            GROSS_SALARY = BASIC + DA;
            IT = 0.30 * GROSS_SALARY;
            NET_SALARY = (BASIC + DA) - IT;
            return NET_SALARY;
        }

        void DISPLAY_EMPLOYEE_DETAILS(int Count) {
            cout << endl <<"***************"<< endl;
            cout << "Employee Number : " << EMPLOYEE_NUMBER << endl;
            cout << "Employee Name : " << EMPLOYEE_NAME << endl;
            cout << "Net Salary : " << NET_SALARY << endl;
            cout << "***************"<< endl;
        }
};

int main() {
    Employee Emp[100];
    int NUMBER_OF_EMPLOYEE,Count;

    cout << endl <<"******* WELCOME!! To The Mahir's Program ********"<< endl << endl;
    cout << "Enter the number of employee(max. 100 ) : ";
    cin >> NUMBER_OF_EMPLOYEE;

    for(Count = 0 ; Count < NUMBER_OF_EMPLOYEE ; Count++) {
        Emp[Count].READ_EMPLOYEE_DETAILS(Count + 1);
    }

    for(Count = 0 ; Count < NUMBER_OF_EMPLOYEE ; Count++) {
        Emp[Count].FIND_NET_SELERY();
    }

    cout << endl <<"******* Your Output is Here :D ********"<< endl;

    for(Count = 0 ; Count < NUMBER_OF_EMPLOYEE ; Count++) {
        Emp[Count].DISPLAY_EMPLOYEE_DETAILS(Count + 1);
    }

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;
}
