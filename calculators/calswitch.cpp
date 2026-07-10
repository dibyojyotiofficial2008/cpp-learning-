#include <iostream>

using namespace std;
 int main() {
    double num1, num2;
    char choice;
    do {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    char operation;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    switch (operation)
    {
     case '+':
        cout << "Sum: " << num1 + num2 << endl;
        break;
     case '-':
        cout << "Difference: " << num1 - num2 << endl;
        break;
     case '*':
        cout << "Product: " << num1 * num2 << endl;
        break;
     case '/':
        cout << "Quotient: " << num1 / num2 << endl;
        break;
     default:
        cout << "Invalid operation!" << endl;
    }
    cout << "Do you want to perform another calculation? (y/n): ";
    cin >> choice;
     }
while (choice == 'y' || choice == 'Y');
return 0;
}
