#include <iostream>
using namespace std;
int count = 0;
class c1
{
public:
    c1()
    {
        count++;
        cout << "\nthis is a constructor is caaled for object number"<<count<<endl;
    }
    ~c1()
    {
        count--;
        cout << "\nthis is a destructor for object number"<<count<<endl;
    }
};

int main()
{

    cout<<"We are inside our main funmction\n";
    cout<<"Creating first object of class c1\n";
    c1 obj1;
    {
        cout<<"Entering this block\n";
        cout<<"Creating two more object of class c1\n";
        c1 obj2;
        c1 obj3;
        cout<<"Exiting this block\n";
    }
    cout<<"We are back to main function\n";
    return 0;
}