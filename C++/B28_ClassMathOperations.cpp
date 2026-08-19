#include <iostream>
#include <cmath>
using namespace std;

class c1
{
private:
    int a, c, d, e, f;
    double b; // sqrt returns double

public:
    void accept()
    {
        cout << "Enter no: ";
        cin >> a;
    }
    void sqr()
    {
        c = a * a;
        cout << "\nSquare: " << c;
    }
    void cube()
    {
        d = a * a * a;
        cout << "\nCube: " << d;
    }
    void fct()
    {
        f = 1;
        for (e = a; e >= 1; e--)
        {
            f = f * e;
        }
        cout << "\nFactorial: " << f;
    }
    void sqrt1()
    {
        b = sqrt(a);
        cout << "\nSquare root: " << b;
    }
};

int main()
{
    c1 obj;
    obj.accept();
    obj.sqr();
    obj.cube();
    obj.fct();
    obj.sqrt1();
    return 0;
}