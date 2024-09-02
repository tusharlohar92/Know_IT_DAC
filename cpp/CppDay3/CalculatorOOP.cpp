#include <iostream>
using namespace std;

class Calculator {
private:
    double no1, no2;

public:
    // Method to accept values
    void Accept_values(double n1, double n2) {
        no1 = n1;
        no2 = n2;
    }

    // Method to display values
    void Display_values() const {
        cout << "no1: " << no1 << ", no2: " << no2 << endl;
    }

    // Method for Addition
    double Addition() const {
        return no1 + no2;
    }

    // Method for Subtraction
    double Subtraction() const {
        return no1 - no2;
    }

    // Method for Multiplication
    double Multiplication() const {
        return no1 * no2;
    }

    // Method for Division
    double Division() const {
        if (no2 != 0) {
            return no1 / no2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;

    double n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    calc.Accept_values(n1, n2);

    cout << "Values entered:" << endl;
    calc.Display_values();

    cout << "Addition: " << calc.Addition() << endl;
    cout << "Subtraction: " << calc.Subtraction() << endl;
    cout << "Multiplication: " << calc.Multiplication() << endl;
    cout << "Division: " << calc.Division() << endl;

    return 0;
}