#include <iostream>
using namespace std;

class c1
{
private:
    int a, b;

public:
    void accept()
    {
        cout << "Enter no: ";
        cin >> a;
    }
    void disp()
    {
        cout << "Result: " << a;
    }
    c1 operator+(c1 obj2)
    {
        c1 os;
        os.a = a + obj2.a;
        return os;
    }
};

int main()
{
    c1 obj1, obj2, obj3;
    obj1.accept();
    obj2.accept();
    obj3 = obj1 + obj2;
    obj3.disp();
    return 0;
}