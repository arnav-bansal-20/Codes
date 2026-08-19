#include <iostream>
using namespace std;

class alpha
{
private:
    int x;

public:
    void accept()
    {
        cout << "Enter no: ";
        cin >> x;
    }
};

class beta : public alpha
{
private:
    int x;

public:
    void accept()
    {
        cout << "Enter :";
        cin >> x;
    }
};

int main()
{
    alpha obj1;
    beta obj2;
    obj1.accept();
    obj2.accept();
    return 0;
}