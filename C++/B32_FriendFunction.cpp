#include <iostream>
using namespace std;

class c1
{
private:
    int a;
    friend void disp(c1 &obj); // Pass by reference to modify
};

void disp(c1 &obj)
{
    obj.a = 100;
    cout << "Value of a: " << obj.a;
}

int main()
{
    c1 obj;
    disp(obj);
    return 0;
}