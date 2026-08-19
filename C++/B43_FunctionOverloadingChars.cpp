#include <iostream>
using namespace std;

class c1
{
private:
    char a, b;

public:
    int overboard(char a)
    {
        return 1;
    }
    int overboard(char a, char b)
    {
        return 2;
    }
};

int main()
{
    c1 obj;
    int c, d;
    c = obj.overboard('a');
    d = obj.overboard('a', 'b');
    cout << "\ndisp : " << c;
    cout << "\ndisp : " << d;
    return 0;
}