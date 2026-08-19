#include <iostream>
using namespace std;

class c1
{
public:
    virtual void disp() = 0;
    void disp2()
    {
        cout << "\nwelcome";
    }
};

class c2 : public c1
{
public:
    void disp()
    {
        cout << "\ncricket";
    }
    void disp3()
    {
        cout << "\nhello";
    }
};

int main()
{
    c2 obj;
    obj.disp();
    obj.disp2();
    obj.disp3();
    return 0;
}