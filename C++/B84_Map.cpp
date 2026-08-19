#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string, int> m; // map is a collection of key-value pairs where each key is unique and maps to a single value
    m["One"] = 1;
    m["Two"] = 2;
    m["Three"] = 3;
    m["Four"] = 4;
    m["Five"] = 5;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl; // i.first returns the key and i.second returns the value
    // }
    m.insert({"Six", 6}); // m.insert() inserts a key-value pair into the map   
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // it->first returns the key and it->second returns the value
    }
    return 0;
}