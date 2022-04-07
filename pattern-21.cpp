#include <iostream>
#include <math.h>
using namespace std;

void pattern21()
{
    int n = 4, flag = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= flag; k++)
        {
            cout << "*";
        }
        cout << endl;
        flag = flag == 5 ? 10 : 5;
        if (i < n)
        {
            for (int j = 1; j <= pow(2, i); j++)
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
// **********
// *
// *
// *
// *
// *****
// *
// *
// *
// *
// *
// *
// *
// *
// **********