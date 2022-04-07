#include <iostream>
using namespace std;

void pattern8()
{
    int val = 1;
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= val; k++)
        {
            cout << "*";
        }
        cout << endl;
        val = val == 1 ? 2 : 1;
        if (i < n)
        {
            for (int j = 1; j <= (i * 4) && j <= 10; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// output :-
// *
// ****
// **
// ********
// *
// **********
// **