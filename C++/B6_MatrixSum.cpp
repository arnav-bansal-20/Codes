#include <iostream>
using namespace std;
int main()
{

    int abc[3][3];
    int a, b, s;
    for (a = 0; a <= 2; a++)
    {
        for (b = 0; b <= 2; b++)
        {
            cout << "Enter no:";
            cin >> abc[a][b];
        }
    }
    for (a = 0; a <= 2; a++)
    {
        s = 0;
        for (b = 0; b <= 2; b++)
        {
            cout << "\t" << abc[a][b];
            s = s + abc[a][b];
        }
        cout << "\t" << s;
        cout << "\n";
    }
    for(b = 0; b <= 2; b++)
    {
        s = 0;
        for (a = 0; a <= 2; a++)
        {
            s = s + abc[a][b];
        }
        cout << "\t" << s;
    }
    return 0;
}
