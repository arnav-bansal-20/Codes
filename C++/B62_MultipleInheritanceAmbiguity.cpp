#include <iostream>
using namespace std;

class c1
{
public:
    void disp()
    {
        cout << "\nThis is disp1 fun of c1 class.";
    }
};

class c2
{
public:
    void disp()
    {
        cout << "\nThis is disp2 fun of c2 class.";
    }
};

class c3 : public c1, public c2
{
public:
    void disp()
    {
        cout << "\nThis is disp3 fun of c3 class.";
    }
};

int main()
{
    c3 obj3;
    obj3.disp();
    obj3.c1::disp(); // Explicitly call base
    obj3.c2::disp(); // Explicitly call base
    return 0;
}