#include <iostream>
using namespace std;

void pattern15()
{
    int n = 4, val = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= val; j++)
        {
            cout << "*" << endl;
        }
        val = val == 1 ? 2 : 1;
        if (i < n)
        {
            for (int k = 1; k <= i * 4 && k <= 10; k++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// output:-
// *
// ****
// *
// *
// ********
// *
// **********
// *
// *