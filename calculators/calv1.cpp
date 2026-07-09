#include <iostream>
using namespace std;

int main()
{
    int n;
    char operation;
    double number, result;

    cout << "==================================" << endl;
    cout << "      N NUMBER CALCULATOR" << endl;
    cout << "==================================" << endl;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    cout << "Choose operation (+ - * /): ";
    cin >> operation;

    // Addition
    if (operation == '+')
    {
        result = 0;

        for (int i = 1; i <= n; i++)
        {
            cout << "Enter number " << i << ": ";
            cin >> number;

            result += number;
        }

        cout << "\nFinal Answer = " << result << endl;
    }

    // Multiplication
    else if (operation == '*')
    {
        result = 1;

        for (int i = 1; i <= n; i++)
        {
            cout << "Enter number " << i << ": ";
            cin >> number;

            result *= number;
        }

        cout << "\nFinal Answer = " << result << endl;
    }

    // Subtraction
    else if (operation == '-')
    {
        cout << "Enter number 1: ";
        cin >> result;

        for (int i = 2; i <= n; i++)
        {
            cout << "Enter number " << i << ": ";
            cin >> number;

            result -= number;
        }

        cout << "\nFinal Answer = " << result << endl;
    }

    // Division
    else if (operation == '/')
    {
        cout << "Enter number 1: ";
        cin >> result;

        for (int i = 2; i <= n; i++)
        {
            cout << "Enter number " << i << ": ";
            cin >> number;

            if (number == 0)
            {
                cout << "Error! Division by zero is not allowed." << endl;
                return 0;
            }

            result /= number;
        }

        cout << "\nFinal Answer = " << result << endl;
    }

    else
    {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}