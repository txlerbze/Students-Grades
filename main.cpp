#include "student.h"
#include <iostream>

using namespace std;

int main() {
    
    cout << "Enter the student's first name: ";
    string FName;
    cin >> FName;
    
    cout << "Enter the student's last name: ";
    string LName;
    cin >> LName;

    Students studentInfo(FName, LName);

    cout << "Enter the number of grades to input: ";
    int numOfGrades;
    cin >> numOfGrades;

    for (int i = 0; i < numOfGrades; ++i) {
        double grade;
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grade;
        studentInfo.addGrade(grade);
    }

    cout << "\nStudent Details: ";
    studentInfo.printDetails();
    cout << endl;

    return 0;
}
