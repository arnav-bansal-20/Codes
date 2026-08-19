#include <iostream>
using namespace std;

class c1
{
public:
    virtual void disp()
    {
        cout << "\nthis is disp fun of c1 class.";
    }
};

class c2 : public c1
{
public:
    void disp()
    {
        cout << "\nthis is disp fun of c2 class.";
    }
};

class c3 : public c1
{
public:
    void disp()
    {
        cout << "\nthis is disp fun of c3 class.";
    }
};

int main()
{
    c1 *obj;
    obj = new c2;
    obj->disp();
    delete obj; // Added delete
    obj = new c3;
    obj->disp();
    delete obj; // Added delete
    return 0;
}