#include <iostream>
using namespace std;

class c1
{
protected:
    int a;
};
/* this is virtual inheritance, it is used to avoid ambiguity 
when multiple derived classes inherit from the same base 
class and the derived class inherits from those derived classes.
It ensures that only one instance of the base class is created 
and shared among the derived classes.*/
class c2 : virtual public c1
{
public:
    c2()
    {
        cout<<"this is class c2 which is virtually inheriting class c1\n";
    }
};

class c3 : virtual public c1
{
public:
    c3()
    {
        cout<<"this is class c3 which is virtually inheriting class c1\n";
    }
};

class c4 : public c2, public c3
{
public:
    void disp()
    {
        a = 100;
        cout << a;
    }
};

int main()
{
    c4 obj;
    obj.disp();
    return 0;
}