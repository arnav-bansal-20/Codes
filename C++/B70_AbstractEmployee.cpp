#include <iostream>
using namespace std;

class employee
{
private:
    char name[20], lname[20];

protected:
    float salary;

public:
    employee()
    {
        cout << "\nThis is const of employee.";
    }
    virtual ~employee()
    {
        cout << "\nthis is dest of employee.";
    }
    virtual void disp() = 0;
    void accept()
    {
        cout << "\nFirst Name: ";
        cin >> name;
        cout << "\nLast Name: ";
        cin >> lname;
    }
    void print()
    {
        cout << "\nFirst name : " << name;
        cout << "\nLast Name : " << lname;
    }
};

class hourlyworker : public employee
{
private:
    int hours;
    float sal;

public:
    hourlyworker()
    {
        cout << "\nThis is const of hourly worker.";
    }
    ~hourlyworker()
    {
        cout << "\nthis is dest of hourly worker.";
    }
    void disp()
    {
        cout << " ";
    }
    void accept()
    {
        employee::accept();
        cout << "\nNo of hours worked : ";
        cin >> hours;
        cout << "\nSalary per hour : ";
        cin >> sal;
    }
    void print()
    {
        employee::print();
        if (hours <= 40)
            salary = hours * sal;
        else
            salary = sal * 40 + ((hours - 40) * sal * 1.5);
        cout << "\nSalary : " << salary;
    }
};

class pieceworker : public employee
{
private:
    int item, rate;

public:
    pieceworker()
    {
        cout << "\nThis is const of pieceworker.";
    }
    ~pieceworker()
    {
        cout << "\nthis is dest of pieceworker.";
    }
    void disp()
    {
        cout << " ";
    }
    void accept()
    {
        employee::accept();
        cout << "\nNo of item produced: ";
        cin >> item;
        cout << "\nRate per item: ";
        cin >> rate;
    }
    void print()
    {
        employee::print();
        cout << "\nSalary : " << item * rate;
    }
};

class boss : public employee
{
private:
    int week, rate;

public:
    boss()
    {
        cout << "\nThis is const of boss.";
    }
    ~boss()
    {
        cout << "\nthis is dest of boss.";
    }
    void disp()
    {
        cout << " ";
    }
    void accept()
    {
        employee::accept();
        cout << "\nNo of weeks: ";
        cin >> week;
        cout << "\nRate per week: ";
        cin >> rate;
    }
    void print()
    {
        employee::print();
        cout << "\nSalary: " << week * rate;
    }
};

class commissionworker : public employee
{
protected:
    char name[20], lname[20];
    int sal;
    float sales;

public:
    commissionworker()
    {
        cout << "\nThis is const of cw.";
    }
    ~commissionworker()
    {
        cout << "\nthis is dest of cw.";
    }
    void disp()
    {
        cout << " ";
    }
    void accept()
    {
        employee::accept();
        cout << "\nFixed Salary: ";
        cin >> sal;
        cout << "\nSales: ";
        cin >> sales;
    }
    void print()
    {
        employee::print();
        salary = sal + sales * 0.5;
        cout << "\nSalary : " << salary;
    }
};

int main()
{
    cout << "\nEnter hourly worker details";
    hourlyworker obj1;
    obj1.accept();
    cout << "\nEnter pieceworker details";
    pieceworker obj2;
    obj2.accept();
    cout << "\nEnter boss details";
    boss obj3;
    obj3.accept();
    cout << "\nEnter commission worker details";
    commissionworker obj4;
    obj4.accept();
    obj1.print();
    obj1.disp();
    obj2.print();
    obj2.disp();
    obj3.print();
    obj3.disp();
    obj4.print();
    obj4.disp();
    return 0;
}