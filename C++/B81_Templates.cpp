#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    int size;
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    vector<float> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    float result = v1.dotproduct(v2);
    cout << "Dot product is " << result << endl;
    return 0;
}

/*
#include <iostream>
using namespace std;
// multiple parameter template
template <class T1, class T2>

class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 d1, T2 d2)
    {
        data1 = d1;
        data2 = d2;
    }
    void display()
    {
        cout<<"Data 1 is "<<data1<<endl;
        cout<<"Data 2 is "<<data2<<endl;
    }

};

int main()
{
myclass obj<char, float>('A', 6.7);
//alternative myclass<char, float> obj('A', 6.7);
obj.display();
return 0;
}
*/



//DEFAULT TEMPLATE ARGUMENTS
/*#include <iostream>
using namespace std;    
template <class T1=int, class T2=float>
class Arnav
{public:
T1 a;
T2 b;
Arnav(T1 x, T2 y)
{
    a=x;
    b=y;
}
void display()
{
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
}
};
int main()
{
    Arnav<> obj(5, 6.7); // we can also write Arnav<int, float> obj(5, 6.7);
    obj.display();
    cout<<endl;
    Arnav<char, double> obj2('A', 6.7);
    obj2.display();
    cout<<endl;
    return 0;
}
*/


//FUNCTION TEMPLATES
/*
#include<iostream>
using namespace std;
template <class T1, class T2>
T1 funcavg(T1 a, T1 b)
{
float avg = (a+b)/2;
    return avg;
}
int main()
{
    cout << funcavg(5, 10) << endl;
    cout << funcavg<float>(5.5, 10.5) << endl;
    return 0;
}
*/ 


//
/*

#include<iostream>
using namespace std;
template<class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display()
    {
        cout << data << endl;
    }
};

void func(int a)
{
    cout<<"I am first func()"<<a<<endl;
}
    tempelate <class T>
void func(T a)
{
    cout<<"I am template func()"<<a<<endl;
}
int main()
{
func(4); //exact match takes highest priority
    return 0;
}
*/