/******************************************************************************

 CSCI 1101 - Calculator (Part B)

 Team Coordinator: [Student's name]

 Collaborator #1: [Manuel Moreno]
 Collaborator #2: [Student's name]

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (*, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) {
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        if (num2 != 0) {
            result = divide(num1, num2);
        }
        else {
            cerr << "Error: Division by zero!" << endl;
            return 1;
        }
        break;

    default:
        cerr << "Error: Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}


// Feature 3: Multiplication.
// Created by: [Manuel Moreno]
double multiply(double a, double b) {
    return a * b;
}

// Feature 4: Division.
// Created by: [Manuel Moreno]
double divide(double a, double b) {
    return a / b;
}