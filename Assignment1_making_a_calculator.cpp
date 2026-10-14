#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char operation;
    char choice;

    cout << "Enter first integer: ";

    if (!(cin >> num1))
    {
        cout << "Invalid input! Please enter an integer.";
        return 0;
    }

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    if (operation != '+' && operation != '-' &&
        operation != '*' && operation != '/')
    {
        cout << "Invalid operation!";
        return 0;
    }

    cout << "Enter second integer: ";

    if (!(cin >> num2))
    {
        cout << "Invalid input! Please enter an integer.";
        return 0;
    }

    switch (operation)
    {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                cout << "Result = " << num1 / num2 << endl;
            }
            break;
    }

    cout << "Do you want to perform another operation? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        cout << "Please run the program again for another operation.";
    }
    else
    {
        cout << "Calculator closed.";
    }

    return 0;
}