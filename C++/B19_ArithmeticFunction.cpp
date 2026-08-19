#include <iostream>
using namespace std;

void add(int a, int b)
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout << "Sum: " << a + b << endl;
}

void subtract(int a, int b)
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout << "Difference: " << a - b << endl;
}

void multiply(int a, int b)
{
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout << "Product: " << a * b << endl;
}

void divide(int a, int b)
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if (b != 0)
        cout << "Quotient: " << a / b << endl;
    else
        cout << "Error: Division by zero!" << endl;
}

int main()
{
    int choice;
    switch(choice)
    {
        case 1:
            cout<<"Add\n";
            break;
        case 2:
            cout<<"Subtract\n";
            break;
        case 3:
            cout<<"Multiply\n";
            break;
        case 4:
            cout<<"Division\n";
            break;
        default:
            cout<<"Invalid choice\n";
    }
    
    
    return 0;
}