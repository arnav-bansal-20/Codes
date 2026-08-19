#include <iostream>
using namespace std;

class base1
{
protected:
    int value;

public:
    base1()
    {
        cout << "\nThis is default const of base1.";
    }
    void getdata()
    {
        cout << "\nvalue";
        cin >> value;
    }
};

class base2
{
protected:
    int index;

public:
    base2()
    {
        cout << "\nThis is default const of base2.";
    }
    void getdata()
    {
        cout << "\nindex";
        cin >> index;
    }
};

class derived : public base1, public base2
{
private:
    float real;

public:
    derived()
    {
        cout << "\nThis is default const of derived.";
    }
    void disp()
    {
        cout << "\nreal";
        cin >> real;
    }
    // Ambiguity for getdata() needs resolution if called from derived object, 
    // but code below calls obj1.getdata(). Derived inherits TWO getdata().
    // We must clarify which one or override it.
    // Or we can call base1::getdata() in main.
};

int main()
{
    derived obj1;
    // obj1.getdata(); // Ambiguous
    obj1.base1::getdata();
    obj1.base2::getdata();
    obj1.disp();
    return 0;
}