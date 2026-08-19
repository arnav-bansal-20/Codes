#include <iostream>
using namespace std;

class c1
{
private:
    int a;
    float b;

public:
    float default_test(int a, float b = 2.217)
    {
        return a + b;
    }
};

int main()
{
    c1 obj;
    float c;
    c = obj.default_test(100, 24.5);
    cout << "result : " << c;
    return 0;
}