#include <iostream>
using namespace std;

void pattern14()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i * 5; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
        {
            for (int k = 0; k < i * 3; k++)
            {
                cout << "*" << endl;
            }
        }
    }
}

// output:-
// *****
// *
// *
// *
// **********
// *
// *
// *
// *
// *
// *
// ***************