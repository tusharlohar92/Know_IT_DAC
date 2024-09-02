#include <iostream>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;

    // Function to accept student details
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin.ignore(); // To clear the newline character from the input buffer
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display() const {
        cout << "\nStudent Details:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;

    // Accepting student details
    student.accept();

    // Displaying student details
    student.display();

    return 0;
}
