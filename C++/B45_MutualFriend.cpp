#include <iostream>
using namespace std;

class fred;
class barney
{
public:
    void disp(fred &obj2);
};

class fred
{
private:
    int a;
    friend void barney::disp(fred &obj);
};

void barney::disp(fred &obj)
{
    obj.a = 100;
    cout << "\nValue of a: " << obj.a;
}

int main()
{
    barney obj1;
    fred obj2;
    obj1.disp(obj2);
    return 0;
}