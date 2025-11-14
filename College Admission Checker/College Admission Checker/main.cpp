//
//  main.cpp
//  College Admission Checker
//
//  Created by Mia Battaglia on 11/13/25.
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << "****** Welcome to the College Admission Checker ******" << endl;

    string name;
    double gpa;
    int sat;
    char ec;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter GPA (0.0 - 4.0): ";
    cin >> gpa;

    cout << "Enter SAT score (out of 1600): ";
    cin >> sat;

    cout << "Participated in extracurriculars? (Y/N): ";
    cin >> ec;

    bool extracurricular = (ec == 'Y' || ec == 'y');

    bool admitted = false;
    string reason;

    if (gpa >= 3.5 && sat >= 1200) {
        admitted = true;
        reason = "Qualified based on GPA and SAT";
    } else if (gpa >= 3.0 && sat >= 1000 && extracurricular) {
        admitted = true;
        reason = "Qualified based on GPA, SAT, and extracurriculars";
    } else {
        admitted = false;
        reason = "Did not meet admission criteria";
    }

    cout << fixed << setprecision(2);
    cout << "============== ADMISSION RESULT ==============" << endl;
    cout << left << setw(30) << setfill('.') << "Student Name:" << name << endl;
    cout << left << setw(30) << "GPA:" << gpa << endl;
    cout << left << setw(30) << "SAT Score:" << sat << endl;

    cout << left << setw(30) << "Extracurriculars:"
         << (extracurricular ? "Yes" : "No") << endl;

    cout << "---------------------------------------------" << endl;
    cout << "Admission Decision: " << (admitted ? "ACCEPTED" : "REJECTED") << endl;
    cout << "Reason: " << reason << endl;
    cout << "=============================================" << endl;

    if (admitted)
        cout << "Congratulations and best wishes!" << endl;

    return 0;
}
