#include <iostream>
using namespace std;

void pattern20()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "**";
            cout << endl;
        }

        if (i < n)
        {
            for (int j = 1; j <= i * 5; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// output:-
// **
// *****
// **
// **
// **********
// **
// **
// **
// ***************
// **
// **
// **
// **