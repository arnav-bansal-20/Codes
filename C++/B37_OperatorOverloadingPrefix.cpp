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
        cout << "Result : " << a;
    }
    void operator++() // prefix
    {
        a++;
    }
    void operator++(int) // postfix
    {
        a++;
    }
};

int main()
{
    c1 obj;
    obj.accept();
    obj++;
    obj.disp();
    return 0;
}