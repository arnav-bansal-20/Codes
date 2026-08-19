#include <iostream>
#include <stdlib.h>
using namespace std;

class c2;
class c1
{
private:
int a;
public:
    friend void disp(c1 &obj1, c2 &obj2);
};
class c2
{
private:
int b;
public:
    friend void disp(c1 &obj1, c2 &obj2);
};
void disp(c1 &obj1, c2 &obj2)
{
obj1.a=200;
cout<<obj1.a;
obj2.b=50;
cout<<"\n"<<obj2.b;
}
int main()
{
c1 obj1;
c2 obj2;
disp(obj1, obj2);
return 0;
}