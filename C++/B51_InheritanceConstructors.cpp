#include <iostream>
using namespace std;

class c1
{
public:
    c1()
    {
        cout << "\nthis is constructor of c1 class";
    }
    ~c1()
    {
        cout << "\nthis is destructor of c1 class";
    }
};

class c2 : public c1
{
public:
    c2()
    {
        cout << "\nthis is constructor of c2 class";
    }
    ~c2()
    {
        cout << "\nthis is destructor of c2 class";
    }
};

int main()
{
    c2 obj2;
    return 0;
}