#include "student.h"
#include <iostream>

using namespace std;

int main() {
    
    cout << "Enter the student's first name: ";
    string firstName;
    cin >> firstName;
    
    cout << "Enter the student's last name: ";
    string lastName;
    cin >> lastName;

    Students student1(firstName, lastName);

    cout << "Enter the number of grades to input: ";
    int numGrades;
    cin >> numGrades;

    for (int i = 0; i < numGrades; ++i) {
        double grade;
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grade;
        student1.addGrade(grade);
    }

    cout << endl << "Student Details:" << endl;
    student1.printDetails();
    return 0;
}
