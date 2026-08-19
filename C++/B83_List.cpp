#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{

    list<int> list1; // empty list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.sort(); // sorts the list in ascending order
    display(list1);
    list1.reverse(); // reverses the order of elements in the list
    // list1.pop_front();
    // list1.pop_back();
    // lis1.remove(7); // removes the first occurrence of 7 from the list
    // list1.remove_if(); // removes all the elements from the list that satisfy a certain
    // display(list1);

    list<int> list2(3);
    list<int>::iterator itr;
    itr = list2.begin();
    *itr = 45;
    itr++;
    *itr = 67;
    itr++;
    *itr = 89;
    display(list2);
    list2.sort();
    list1.merge(list2); // merges two sorted lists into one sorted list
    cout << "After merging list1 and list2 : " << endl;
    display(list1);

    return 0;
}
