#include <iostream>
using namespace std;

int main() {
    cout << "******* Calculator *******\n";
    
    char op;
    float num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    }
    else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    }
    else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    }
    else if (op == '/') {
        if (num2 == 0) {
            cout << "Error! Division by zero.";
        } else {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
    }
    else {
        cout << "Error! Invalid operator.";
    }
    
    cout << "\n**\n";
    return 0;
}