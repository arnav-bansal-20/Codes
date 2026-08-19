#include <iostream>
using namespace std;

class student
{
private:
    char name[20];
    int marks;

public:
    void accept()
    {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "\nEnter Marks: ";
        cin >> marks;
    }
    void disp()
    {
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
    }
    int operator>(int a)
    {
        if (marks > a)
            return 1;
        else
            return 0;
    }
    student operator+(int b)
    {
        student ob;
        ob.marks = marks + b;
        return ob;
    }
};

int main()
{
    student obj1;
    obj1.accept();
    obj1.disp();
    if (obj1 > 34)
        cout << "\nPass";
    else
    {
        cout << "\nfail";
        obj1 = obj1 + 5;
        if (obj1 > 34)
            cout << "\npass after grace marks";
        else
            cout << "\nfail even after grace marks";
    }
    return 0;
}