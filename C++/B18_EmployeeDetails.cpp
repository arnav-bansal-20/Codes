#include <iostream>
#include <cstring>
using namespace std;

void disp(int a, int b, char name[20], char name1[20])
{
    cout << "\nName : " << name;
    cout << "\nGender : " << name1;
    cout << "\nAge : " << a;
    cout << "\nSalary : " << b;
}

int main()
{
    int a, b;
    char name[20], name1[20];
    cout << "Name : ";
    cin >> name;
    cout << "Gender : ";
    cin >> name1;
    cout << "Age : ";
    cin >> a;
    cout << "Salary : ";
    cin >> b;
    disp(a, b, name, name1);
    return 0;
}