#include <iostream>
using namespace std;

class c1
{
private:
    int a, b;

public:
    void accept()
    {
        cout << "Enter no: ";
        cin >> a;
    }
    void disp()
    {
        cout << "\nResult: " << a;
    }
    c1 operator++(int)
    {
        c1 ob;
        ob.a = a++;
        return ob;
    }
    c1 operator++()
    {
        c1 ob;
        ob.a = ++a;
        return ob;
    }
};

int main()
{
    c1 obj1, obj2;
    obj1.accept();
    obj2 = ++obj1;
    obj1.disp();
    obj2.disp();
    return 0;
}