#include <iostream>
#include <vector>
using namespace std;
template <class T>
void printVector(vector<T> &vec)
{
    for (int i = 0; i < vec.size(); i++) // v.size() returns the number of elements in the vector
    {
        cout << vec[i] << " ";
        cout<<vec.at(i)<<" "; // v.at() returns the element at a specific position in the vector
    }
    cout << endl;
}
int main()
{ int ele;
    vector<int> vec1; 
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> vec4(6,3);
    // for (int i = 0; i < 5; i++)
    // { 
    //     cout<<"Enter the element to be added in the vector: ";
    //     cin>>ele;
    //     vec1.push_back(ele); // v.push_back() adds an element to the end of the vector
    // }
    //vec1.pop_back(); // v.pop_back() removes the last element from the vector
     // v(n, val) creates a vector of size n with all elements initialized to val
    // printVector(vec1);
    // vector<int> :: iterator iter = vec1.begin(); // v.begin() returns an iterator pointing to the first element of the vector
    // vec1.insert(iter,5, 10); // v.insert() inserts an element at a specific position in the vector
    // printVector(vec1);
    return 0;
}