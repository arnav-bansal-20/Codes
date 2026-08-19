#include <iostream>
using namespace std;

class c1
{
public:
    c1()
    {
        cout << "\nThis is constructor of c1 class.";
    }
    virtual ~c1()
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
    ~c2()
    {
        cout << "\nThis is destructor of c2 class.";
    }
};

int main()
{
    c1 *obj;
    obj = new c2;
    delete obj;
    return 0;
}