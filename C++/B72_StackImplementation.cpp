#include <iostream>
using namespace std;

const int abc = 100;
class c1
{
private:
    int stackArr[abc]; // Renamed to avoid conflict with class name
    int top;

public:
    c1()
    {
        top = 0;
    }
    int c1push(int item)
    {
        if (top < abc)
        {
            stackArr[top++] = item;
            return 0;
        }
        else
            return -1;
    }
    int c1pop(int &item)
    {
        if (top > 0)
        {
            item = stackArr[--top];
            return 0;
        }
        else
            return -1;
    }
};

int main()
{
    c1 st;
    int num;
    while (1)
    {
        cout << "enter a number(0 to quit): ";
        cin >> num;
        if (num)
        {
            if (st.c1push(num) == -1)
            {
                cout << "\n\nStack full.";
                break;
            }
        }
        else
            break;
    }
    while (1)
    {
        if (st.c1pop(num) == -1)
        {
            cout << "\n\nStack empty.";
            break;
        }
        else
            cout << "\nNumber: " << num;
    }
    return 0;
}