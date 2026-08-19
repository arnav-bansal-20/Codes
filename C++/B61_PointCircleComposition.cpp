#include <iostream>
using namespace std;

class point
{
private:
    int x, y;

public:
    void accept()
    {
        cout << "\nenter x co-ordinate: ";
        cin >> x;
        cout << "\nenter y co-ordinate: ";
        cin >> y;
    }
    void disp()
    {
        cout << "\nx co-ordinate:" << x;
        cout << "\nyco-ordinate:" << y;
    }
    point()
    {
        cout << "\ndefault const of class point.";
    }
};

class circle
{
private:
    point obj;
    int radius;

public:
    circle()
    {
        cout << "\ndefault const of class circle.";
    }
    void accept()
    {
        obj.accept();
        cout << "\nRadius: ";
        cin >> radius;
    }
    void disp()
    {
        cout << "\nRadius: " << radius;
        cout << "\nArea: " << 3.14 * radius * radius;
    }
};

int main()
{
    point obj;
    circle obj1;
    obj.accept();
    obj1.accept();
    obj.disp();
    obj1.disp();
    return 0;
}