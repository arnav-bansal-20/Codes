#include <iostream>
using namespace std;

class c1
{
private:
    int a, b, c, d;

public:
    void accept()
    {
        cout << "First no : ";
        cin >> a;
        cout << "Second no : ";
        cin >> b;
    }
    void sum();
    void sub();
};
void c1 ::sum()
{
    c = a + b;
    cout << "\nsum of no : " << c;
}
void c1 ::sub()
{
    d = a - b;
    cout << "\nsub of no : " << d;
}
int main()
{
    c1 obj;
    obj.accept();
    obj.sum();
    obj.sub();
    return 0;
}