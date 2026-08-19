#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout<<"Language Selector:\n";
    cout<<"1. Basic\n";
    cout<<"2. Fortran\n";
    cout<<"3. Pascal\n";
    cout<<"4. C++\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Basic is easy\n";
            break;
        case 2:
            cout<<"Fortran is fun\n";
            break;
        case 3:
            cout<<"Pascal may be structured\n";
            break;
        case 4:
            cout<<"C++ is the one\n";
            break;
        default:
            cout<<"Invalid entry\n";
    }
    return 0;
}