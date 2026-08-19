#include <iostream>
using namespace std;

class c2;
class c1
{
public:
    void disp(c2 &obj2);
};

class c2
{
private:
    int a;
    friend class c1;
};

void c1::disp(c2 &obj)
{
    obj.a = 100;
    cout << "\n"<< obj.a;
}

int main()
{
    c1 obj1;
    c2 obj2;
    obj1.disp(obj2);
    return 0;
}