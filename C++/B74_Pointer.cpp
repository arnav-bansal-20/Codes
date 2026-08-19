#include<iostream>
using namespace std;
int main()
{
    int a =4;
    int *ptr = &a;
    cout << "Value of a is "<<*ptr<<endl;
    //new keyword is used to allocate memory dynamically
    int *p = new int(5);
    cout << "Value at address p is "<<*p<<endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "Values in array are: ";
    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //deallocate memory allocated for single integer
    delete p;
    //deallocate memory allocated for array
    delete[] arr;
    return 0;
}