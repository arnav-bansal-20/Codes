#include <iostream>
using namespace std;

class date
{
private:
    int d, m, y;

public:
    void accept()
    {
        cout << "\n\tDate:  ";
        cin >> d;
        cout << "\n\tMonth:  ";
        cin >> m;
        cout << "\n\tYear:  ";
        cin >> y;
    }
    void disp()
    {
        cout << "\ndd/mm/yyyy:  " << d << "/" << m << "/" << y;
        cout << "\nmm/dd/yyyy:  " << m << "/" << d << "/" << y;
        cout << "\nyyyy/dd/mm:  " << y << "/" << d << "/" << m;
    }

    int operator>(date obj2)
    {
        if (y > obj2.y)
            return 1;
        else if (obj2.y > y)
            return 0;
        else
        {
            if (m > obj2.m)
                return 1;
            else if (obj2.m > m)
                return 0;
            else
            {
                if (d > obj2.d)
                    return 1;
                else if (obj2.d > d)
                    return 0;
                else
                    return 0;
            }
        }
    }
};

int main()
{
    date obj1, obj2;
    obj1.accept();
    obj1.disp();
    obj2.accept();
    obj2.disp();
    if (obj1 > obj2)
        cout << "\n\nfirst date is bigger";
    else if (obj2 > obj1)
        cout << "\n\nsecond date is bigger";
    else
        cout << "\n\nboth date are same";
    return 0;
}