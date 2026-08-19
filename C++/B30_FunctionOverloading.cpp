#include <iostream>
using namespace std;

class c1
{
public:
    void disp()
    {
        cout << "\nThis is a disp fun without argument";
    }
    void disp(int a)
    {
        cout << "\nThis is disp fun with one integer.";
    }
    void disp(int a, char g)
    {
        cout << "\nThis is disp fun with one integer and char.";
    }
    void disp(int c, int d)
    {
        cout << "\nThis is disp fun with two integer.";
    }
    void disp(int e, char h, const char* name)
    {
        cout << "\nThis is disp fun with two integer,one char and one string.";
    }
    void disp(int a, int b, int c)
    {
        cout << "\nThis is disp fun with three integer.";
    }
};

int main()
{
    c1 obj;
    obj.disp();
    obj.disp(1);
    obj.disp(1, 'a');
    obj.disp(1, 2, 3);
    obj.disp(1, 2);
    obj.disp(1, 'a', "amit");
    return 0;
}