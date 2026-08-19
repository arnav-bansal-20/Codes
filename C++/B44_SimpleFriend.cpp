#include <iostream>
using namespace std;

class fred
{
private:
    int a;
    friend int barney(fred obj1);
};

int barney(fred obj1)
{
    return 1;
}

int main()
{
    int b;
    fred obj1;
    b = barney(obj1);
    cout << "Display: " << b;
    return 0;
}