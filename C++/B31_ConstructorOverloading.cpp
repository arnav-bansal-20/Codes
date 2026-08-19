#include <iostream>
using namespace std;

class c1
{
private:
    int a, b, c, d, e, f;
    char g, h;
    char name[20];

public:
    c1()
    {
        cout << "\nThis is a disp fun without argument";
    }
    //Copy Constructor
    c1(c1 &obj)
    {
        cout << "\nThis is copy constructor.";
    }
    c1(int a)
    {
        cout << "\nThis is disp fun with one integer.";
    }
    c1(int a, char g)
    {
        cout << "\nThis is disp fun with one integer and char.";
    }
    c1(int c, int d)
    {
        cout << "\nThis is disp fun with two integer.";
    }
    c1(int e, char h, const char* name)
    {
        cout << "\nThis is disp fun with two integer,one char and one string.";
    }
    c1(int a, int b, int c)
    {
        cout << "\nThis is disp fun with three integer.";
    }
};

int main()
{
    c1 obj1;
    c1 obj2(10);
    c1 obj3(1, 'a');
    c1 obj4(1, 2);
    c1 obj5(1, 'a', "amit");
    c1 obj6(1, 2, 3);
    c1 obj7(obj1);
    return 0;
}