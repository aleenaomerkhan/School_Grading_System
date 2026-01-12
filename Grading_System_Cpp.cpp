#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo, studentClass;
    int sub1, sub2, sub3, sub4, sub5;
    int total;
    float percentage;

    cout << "------ SCHOOL GRADING SYSTEM ------" << endl;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Class: ";
    cin >> studentClass;

    cout << "Enter marks of 5 subjects (out of 100):" << endl;
    cout << "Subject 1: ";
    cin >> sub1;
    cout << "Subject 2: ";
    cin >> sub2;
    cout << "Subject 3: ";
    cin >> sub3;
    cout << "Subject 4: ";
    cin >> sub4;
    cout << "Subject 5: ";
    cin >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5.0;

    cout << "\n------ RESULT ------" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Class       : " << studentClass << endl;
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade       : A+";
    else if (percentage >= 80)
        cout << "Grade       : A";
    else if (percentage >= 70)
        cout << "Grade       : B";
    else if (percentage >= 60)
        cout << "Grade       : C";
    else if (percentage >= 50)
        cout << "Grade       : D";
    else
        cout << "Grade       : Fail";

    return 0;
}
