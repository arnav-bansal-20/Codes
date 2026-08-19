#include <iostream>
using namespace std;

class c1
{
public:
    c1()
    {
        cout << "\nthis is constructorof c1 class.";
    }
    c1(int a, int b)
    {
        cout << "\nthis is constructor with 2 integer.";
    }
    ~c1()
    {
        cout << "\nthis is destrucotor of c1 class";
    }
};

class c2 : public c1
{
public:
    c2()
    {
        cout << "\nthis is constructor of c2 class.";
    }
    c2(int a, int b, int c) : c1(a, b)
    {
        cout << "\nthis is constructor with 3 integer.";
    }
    ~c2()
    {
        cout << "\nthis is destrucotor of c2 class";
    }
};

class c3 : public c2
{
public:
    c3()
    {
        cout << "\nthis is constructor of c3 class.";
    }
    c3(int a, int b, int c, int d) : c2(a, b, c)
    {
        cout << "\nthis is constructor with 4 integer.";
    }
    ~c3()
    {
        cout << "\nthis is destrucotor of c3 class";
    }
};

int main()
{
    c3 obj3(1, 2, 3, 4);
    return 0;
}