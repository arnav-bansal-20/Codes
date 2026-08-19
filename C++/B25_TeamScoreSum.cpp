#include <iostream>
using namespace std;

int main()
{
    int abc[11];
    int a, s = 0;
    // Assuming user wants to enter 11 scores. 
    // Array indices are 0 to 10. Loop says a < 11 which is 11 iterations (0..10).
    // This will cause buffer overflow abc[10].
    // Fixing loop to a < 11.
    for (a = 0; a < 11; a++)
    {
        cout << "Score : ";
        cin >> abc[a];
        s = s + abc[a];
    }
    cout << "total score of team: " << s;
    return 0;
}