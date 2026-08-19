#include <iostream>
using namespace std;

class alpha
{
public:
    int x;
};

class beta : public alpha
{
public:
    int x;
};

int main()
{
    int c, d;
    alpha obj1;
    beta obj2;
    c = obj1.x = 100;
    d = obj2.x = 200;
    cout << "x=" << c;
    cout << "\nx=" << d;
    return 0;
}