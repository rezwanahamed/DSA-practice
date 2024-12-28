//create a class student which has data members name, roll no, semester, section and marks of five subjects. write a C++ program to display all the information of student with total marks
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int semester;
    char section;
    int marks[5];

public:
    // Constructor to initialize student details
    Student(string n, int r, int sem, char sec, int m[5]) {
        name = n;
        rollNo = r;
        semester = sem;
        section = sec;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    // Function to calculate total marks
    int calculateTotalMarks() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    // Function to display student details
    void display() {
        cout << "Student Information:" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Semester   : " << semester << endl;
        cout << "Section    : " << section << endl;
        cout << "Marks      : ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << calculateTotalMarks() << endl;
    }
};

int main() {
    string name;
    int rollNo, semester;
    char section;
    int marks[5];

    // Taking input from user
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter semester: ";
    cin >> semester;
    cout << "Enter section: ";
    cin >> section;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    // Creating Student object
    Student student(name, rollNo, semester, section, marks);

    // Displaying student details
    student.display();

    return 0;
}
