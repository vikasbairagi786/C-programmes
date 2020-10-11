//18.	Print USN, print the USN, Name and the average marks Define a STUDENT class with USN, Name and MARKS in 3tests of subject.
//Declare an array of 10 STUDENT objects. Using appropriate functions. Print USN, print the USN, Name and the average marks of all the students.

// NAME :- VIKAS BAIRAGI

// ENROLLMENT :- 190510101007 DIV:-A



#include<iostream>
#define SIZE 10
using namespace std;

class Student {
    private:
        string NAME;
        int NUMBER;
        float MARKS[3];

    public:
        void GET_DATA();
        void DISPLAY_DATA();
};

void Student::GET_DATA() {
    cout << "Enter The Student's USN : ";
    cin >> NUMBER;
    cout << "Enter The Student Name : ";
    cin >> NAME;

    for (int Iteration = 0 ; Iteration <= 2 ; Iteration++) {
        cout << "Enter The Marks Of The " << Iteration+1 <<  " Subject : ";
        cin >> MARKS[Iteration];
    }
    cout << endl;
}

void Student::DISPLAY_DATA() {
    float AVERAGE, TOTAL , SUM = 0;

    for (int Iteration = 1 ; Iteration <= 3 ; Iteration++) {
        SUM = SUM + MARKS[Iteration];
    }

    AVERAGE = SUM / 3;

    cout << "Student USD : " << NUMBER << endl;
    cout << "Student Name : " << NAME << endl;
    cout << "Student Average Marks : " << AVERAGE << endl;
}

int main() {
    Student Data[SIZE];
    int USER_INPUT;

    cout << endl <<"******* WELCOME!! To The VIKAS's Program ********"<< endl << endl;

    cout << "==============================" << endl << "THIS IS STUDENT MARKS REPORT" << endl << "==============================" << endl << endl;

    cout << "Enter The Number of Student : ";
    cin >> USER_INPUT;
    cout << endl;

    if (USER_INPUT > SIZE) {
        cout << "Given Input is Graeater Than The Size. Plaese Give Input Less Than 10. " << endl << "Thank You." << endl;
        exit(1);
    }

    for (int Iteration = 0 ; Iteration < USER_INPUT ; Iteration++) {
        cout << "==============================" << endl << "Enter The Details of Student No. " << Iteration+1 << endl << "==============================" << endl << endl;
        Data[Iteration].GET_DATA();
    }

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    for (int Iteration = 0 ; Iteration < USER_INPUT ; Iteration++) {
        cout << "==============================" << endl << "The Details of Student No. " << Iteration+1 << endl << "==============================" << endl;
        Data[Iteration].DISPLAY_DATA();
    }


    return 0;
}
