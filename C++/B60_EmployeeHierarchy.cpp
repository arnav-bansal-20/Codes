#include <iostream>
using namespace std;

class employee
{
private:
    char name1[20], name2[20], name3[20];
    int a;

public:
    void accept()
    {
        cout << "\n\tEnter Name: ";
        cin >> name1;
        cout << "\n\tEnter employee id: ";
        cin >> a;
        cout << "\n\tEnter Department: ";
        cin >> name2;
        cout << "\n\tEnter designation: ";
        cin >> name3;
    }
    void disp()
    {
        cout << "\nName: " << name1;
        cout << "\nEmployee Id: " << a;
        cout << "\nDepartment: " << name2;
        cout << "\nDesignation: " << name3;
    }
};

class manager : public employee
{
private:
    int b, c;

public:
    void accept1()
    {
        cout << "\n\tPerks: ";
        cin >> b;
        cout << "\n\tNo of employees reporting:  ";
        cin >> c;
    }
    void disp1()
    {
        cout << "\nPerks: " << b;
        cout << "\nNo of employees reporting: " << c;
    }
};

class secretary : public employee
{
private:
    char name4[20];

public:
    void accept2()
    {
        cout << "\n\tBoss name: ";
        cin >> name4;
    }
    void disp2()
    {
        cout << "\nBoss name: " << name4;
    }
};

int main()
{
    employee obj1;
    manager obj2;
    secretary obj3;
    obj1.accept();
    obj2.accept1();
    obj3.accept2();
    obj1.disp();
    obj2.disp1();
    obj3.disp2();
    return 0;
}