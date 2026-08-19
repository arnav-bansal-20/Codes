#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct node
{
    char name[20];
    node *next;
};

class c1
{
private:
    node *head;

public:
    c1() { head = NULL; }

    void f1()
    {
        node *n;
        n = new node;
        cout << "Enter Name: ";
        cin >> n->name;
        n->next = head;
        head = n;
    }
    void f2() // Insert at end
    {
        node *n;
        n = new node;
        cout << "Enter Name: ";
        cin >> n->name;
        n->next = NULL;
        if (head == NULL)
            head = n;
        else
        {
            node *curr = head;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = n;
        }
    }
    void f3() // Insert sorted
    {
        node *n;
        n = new node;
        cout << "Enter Name: ";
        cin >> n->name;
        n->next = NULL;
        if (head == NULL)
            head = n;
        else
        {
            if (strcmp(n->name, head->name) < 0)
            {
                n->next = head;
                head = n;
            }
            else
            {
                node *curr = head;
                while (curr->next != NULL && strcmp(curr->next->name, n->name) < 0)
                {
                    curr = curr->next;
                }
                n->next = curr->next;
                curr->next = n;
            }
        }
    }
    void f4() // Print
    {
        node *curr;
        curr = head;
        while (curr != NULL)
        {
            cout << "\n" << curr->name;
            curr = curr->next;
        }
    }
    void rec(node *curr)
    {
        if (curr != NULL)
        {
            cout << "\n" << curr->name;
            rec(curr->next);
        }
    }
    void f5() // Recursive print
    {
        rec(head);
    }
    void f6() // Reverse
    {
        node *last = NULL, *curr = head, *nxt;
        while (curr != NULL)
        {
            nxt = curr->next;
            curr->next = last;
            last = curr;
            curr = nxt;
        }
        head = last;
    }
    void f7() // Delete All
    {
        while (head != NULL)
        {
            node *curr = head;
            head = curr->next;
            // delete curr->name; // ERROR: Static array cannot be deleted
            delete curr;
        }
    }
    void f8() // Delete by name
    {
        char nm[20];
        cout << "Enter name to delete: ";
        cin >> nm;
        node *curr = head;
        node *prev = head;
        while (curr != NULL)
        {
            if (strcmp(nm, curr->name) == 0)
            {
                if (curr == head)
                {
                    head = head->next;
                    // delete curr->name;
                    delete curr;
                    return; // Deleted, done
                }
                else
                {
                    prev->next = curr->next;
                    // delete curr->name;
                    delete curr;
                    return; // Deleted, done
                }
            }
            prev = curr;
            curr = curr->next;
        }
    }
};

int main()
{
    int a;
    c1 obj;
    while (1)
    {
        cout << "\n1. Insert at the beggining";
        cout << "\n2. Insert at the end";
        cout << "\n3. Insert in sorted order";
        cout << "\n4. Print";
        cout << "\n5. Print through recurssive function";
        cout << "\n6. Reverse";
        cout << "\n7. Delete All";
        cout << "\n8. Delete";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> a;
        if (a == 1)
        {
            obj.f1();
        }
        else if (a == 2)
        {
            obj.f2();
        }
        else if (a == 3)
        {
            obj.f3();
        }
        else if (a == 4)
        {
            obj.f4();
        }
        else if (a == 5)
        {
            obj.f5();
        }
        else if (a == 6)
        {
            obj.f6();
        }
        else if (a == 7)
        {
            obj.f7();
        }
        else if (a == 8)
        {
            obj.f8();
        }
        else if (a == 0)
        {
            break;
        }
    }
    return 0;
}