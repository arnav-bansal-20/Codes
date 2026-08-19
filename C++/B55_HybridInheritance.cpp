#include <iostream>
using namespace std;

class c1
{
public:
    c1()
    {
        cout << "\nThis is constructor of c1 class.";
    }
    c1(int a, int b)
    {
        cout << "\nThis is constructor of c1 with 2 integer.";
    }
    ~c1()
    {
        cout << "\nThis is destructor of c1 class.";
    }
};

class c2 : public c1
{
public:
    c2()
    {
        cout << "\nThis is constructor of c2 class.";
    }
    c2(int a, int b, int c) : c1(a, b)
    {
        cout << "\nThis is constructor of c2 with 3 integer.";
    }
    ~c2()
    {
        cout << "\nThis is destructor of c2 class.";
    }
};

class c3 : public c1
{
public:
    c3()
    {
        cout << "\nThis is constructor of c3 class.";
    }
    c3(int a, int b, int c, int d) : c1(a, b)
    {
        cout << "\nThis is constructor of c3 with 4 integer.";
    }
    ~c3()
    {
        cout << "\nThis is destructor of c3 class.";
    }
};

class c4 : public c2, public c3
{
public:
    c4()
    {
        cout << "\nThis is constructor of c4 class.";
    }
    c4(int a, int b, int c, int d, int e) : c2(a, b, c), c3(a, b, c, d)
    {
        cout << "\nThis is constructor of c4 with 5 integer.";
    }
    ~c4()
    {
        cout << "\nThis is destructor of c4 class.";
    }
};

int main()
{
    c4 obj3(1, 2, 3, 4, 5);
    return 0;
}