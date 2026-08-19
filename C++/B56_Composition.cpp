#include <iostream>
using namespace std;

class c1
{
public:
    void disp()
    {
        cout << "\nhello";
    }
};

class c2
{
private:
    c1 obj;

public:
    void disp2()
    {
        cout << "\nwelcome";
        obj.disp();
    }
};

int main()
{
    c2 obj2;
    obj2.disp2();
    return 0;
}