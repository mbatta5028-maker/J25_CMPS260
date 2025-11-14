//
//  main.cpp
//  Grade Analyzer
//
//  Created by Mia Battaglia on 11/13/25.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string getLetterGrade(double avg) {
    if (avg >= 97) return "A+";
    else if (avg >= 93) return "A";
    else if (avg >= 90) return "A-";
    else if (avg >= 87) return "B+";
    else if (avg >= 83) return "B";
    else if (avg >= 80) return "B-";
    else if (avg >= 77) return "C+";
    else if (avg >= 73) return "C";
    else if (avg >= 70) return "C-";
    else if (avg >= 60) return "D";
    else return "F";
}

int main() {
    cout << "****** Welcome to the Grade Analyzer ******" << endl;

    string name;
    double s1, s2, s3;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter score for Assignment 1: ";
    cin >> s1;

    cout << "Enter score for Assignment 2: ";
    cin >> s2;

    cout << "Enter score for Assignment 3: ";
    cin >> s3;

    double avg = (s1 + s2 + s3) / 3.0;
    string grade = getLetterGrade(avg);

    cout << fixed << showpoint << setprecision(2);

    cout << "============== FINAL GRADE REPORT ==============" << endl;
    cout << left << setw(30) << setfill('.') << "Student Name:" << name << endl;
    cout << left << setw(30) << "Assignment 1:" << s1 << endl;
    cout << left << setw(30) << "Assignment 2:" << s2 << endl;
    cout << left << setw(30) << "Assignment 3:" << s3 << endl;

    cout << "-----------------------------------------------" << endl;
    cout << left << setw(30) << "Final Average:" << avg << endl;
    cout << left << setw(30) << "Final Grade:" << grade << endl;

    cout << "=================================================" << endl;
    cout << "Keep up the great work!" << endl;

    return 0;
}
