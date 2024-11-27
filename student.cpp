#include "student.h"
#include <iostream>
#include <iomanip>

using namespace std;

Students::Students(string studentFirstName, string studentLastName) {
    FName = studentFirstName;
    LName = studentLastName;
}

void Students::addGrade(double grade) {
    grades.push_back(grade); 
}

double Students::calculateAverage() {
    if (grades.empty()) {
        return 0;
    } else {
        double sum = 0;
        for (double grade : grades) {
            sum += grade;
        }
        return sum / grades.size(); 
    }
}

void Students::printDetails() {
    cout << "Student's Full Name: " << FName << " " << LName << endl;
    double average = calculateAverage();
    cout << "The average grade the student got: " << average << endl;
}
