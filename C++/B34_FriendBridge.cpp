#include <iostream>
using namespace std;

class c2;
class c1
{
private:
    int a;
    friend void disp(c1 &obj1, c2 &obj2);
};

class c2
{
private:
    int b;
    friend void disp(c1 &obj1, c2 &obj2);
};

void disp(c1 &obj1, c2 &obj2)
{
    obj1.a = 500;
    cout << "Value of a: " << obj1.a<<endl;
    obj2.b = 100;
    cout << "\nValue of b: " << obj2.b<<endl;
}

int main()
{
    c1 obj1;
    c2 obj2;
    disp(obj1, obj2);
    return 0;
}