#include <iostream>
using namespace std;

class c1
{
public:
    void disp1();
    void disp2(int a);
    void disp3(int a, char b);
    void disp4(int a, char b, const char* name);
};

void c1::disp1()
{
    cout << "This is a fun without argument.";
}

void c1::disp2(int a)
{
    cout << "\nThis is a fun with 1 integer.";
}

void c1::disp3(int a, char b)
{
    cout << "\nThis is a fun with 1 integer and 1 char.";
}

void c1::disp4(int a, char b, const char* name)
{
    cout << "\nThis is a fun with 1 integer,1 char and 1 name.";
}

int main()
{
    c1 obj;
    obj.disp1();
    obj.disp2(1);
    obj.disp3(1, 'a');
    obj.disp4(1, 'a', "amit");
    return 0;
}
