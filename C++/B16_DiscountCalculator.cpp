#include <iostream>
using namespace std;

int main()
{
    float amt, dis = 0, net;
    char ans1, ans2;
    cout << "Enter Amount : ";
    cin >> amt;
    if (amt > 2000)
    {
        cout << "\nAre you a regular customer : ";
        cin >> ans1;
        if (ans1 == 'y')
        {
            cout << "\nAre you paying in cash : ";
            cin >> ans2;
            if (ans2 == 'y')
                dis = amt * .20;
            else
                dis = amt * .15;
        }
        else
            dis = amt * .10;
    }
    net = amt - dis;
    cout << "\nAmount : " << amt;
    cout << "\nDiscount : " << dis;
    cout << "\nAmount after discount : " << net;
    return 0;
}