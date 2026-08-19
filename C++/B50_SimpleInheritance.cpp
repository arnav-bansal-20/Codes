#include <iostream>
using namespace std;
// this is the baseclass.
class c1
{
    // this is the private data member which cannot be accessed by the derived class.
private:
    int a;
//this is the protected data member which can be accessed by the derived class.
protected:
    int b;

public:
    int c;
};
// this is the derived class.
// derived class can access protected and public data member of baseclass.
// ":" is used to inherit the properties of baseclass.
// derived class systax : 
// class {{derived_class_name}} : {{access_specifier/visibility-mode}} {{base_class_name}}
class c2 : public c1
{
public:
    void disp()
    {
       // a=20; // this will give an error because a is private data member of class c1 and cannot be accessed by derived class c2.
        b = 20;
        c = 30;
        cout << "\n"<< b;
        cout << "\n"<< c;
    }
};

int main()
{
    c2 obj2;
    obj2.disp();
    return 0;
}