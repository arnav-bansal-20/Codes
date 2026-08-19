#include <iostream>
using namespace std;

class alpha
{
public:
    alpha()
    {
        cout << "\nthis is constructorof alpha class.";
    }
    alpha(int a)
    {
        cout << "\nthis is constructor of class alpha nwith 1 int.";
    }
};

class beta : public alpha
{
public:
    beta()
    {
        cout << "\nthis is constructor of beta class.";
    }
    beta(int a) : alpha(a)
    {
        cout << "\nthis is constructor of class beta with 1 int.";
    }
};

int main()
{
    beta obj2(1);
    return 0;
}