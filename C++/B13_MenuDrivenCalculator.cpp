#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, h, choice;
    while (1)
    {
        cout << "\n Calculator";
        cout << "\n1. Evaluate greater than or lesser than";
        cout << "\n2. Add";
        cout << "\n3. Subtract";
        cout << "\n4. Multiply";
        cout << "\n5. Division";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (a > b)
                cout << a << " is greater than " << b;
            else if (a < b)
                cout << a << " is lesser than " << b;
            else
                cout << a << " is equal to " << b;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum: " << a + b;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Difference: " << a - b;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Product: " << a * b;
            break;
        case 5:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b != 0)
                cout << "Quotient: " << a / b;
            else
                cout << "Error: Division by zero!";
            break;
            default:
                cout << "Invalid choice!";
        }
        return 0;
    }