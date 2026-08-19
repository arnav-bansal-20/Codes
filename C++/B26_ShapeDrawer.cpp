#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    while (1)
    {
        cout << "\n1. Rectangle";
        cout << "\n2. Square";
        cout << "\n3. Pyramid";
        cout << "\n0. Exit";
        cout << "\nenter: ";
        cin >> e;
        if (e == 1)
        {
            cout << "Enter width : ";
            cin >> c;
            cout << "Enter height : ";
            cin >> d;
            for (a = 1; a <= d; a++)
            {
                for (b = 1; b <= c; b++)
                {
                    if (a == 1 || a == d)
                        cout << " *";
                    else
                    {
                        if (b == 1 || b == c)
                            cout << " *";
                        else
                            cout << "  ";
                    }
                }
                cout << "\n";
            }
        }
        else if (e == 2)
        {
            cout << "Enter width : ";
            cin >> c;
            for (a = 1; a <= c; a++)
            {
                for (b = 1; b <= c; b++)
                {
                    if (a == 1 || a == c)
                        cout << " *";
                    else
                    {
                        if (b == 1 || b == c)
                            cout << " *";
                        else
                            cout << "  ";
                    }
                }
                cout << "\n";
            }
        }
        else if (e == 3)
        {
            for (a = 1; a <= 10; a++)
            {
                for (b = 9; b >= a; b--)
                {
                    cout << " ";
                }
                for (f = 1; f <= a; f++)
                {
                    if (f == 1 || f == a || a == 10)
                        cout << " *";
                    else
                        cout << "  ";
                }
                cout << "\n";
            }
        }
        else if (e == 0)
        {
            break;
        }
    }
    return 0;
}