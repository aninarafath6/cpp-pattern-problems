#include <iostream>
using namespace std;
#include <math.h>

void pattern9()
{
    int n = 3;
    int val = 1;
    int dv = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= pow(2, i); j++)
        {
            cout << "*";
        }
        cout << endl;
        for (int k = 1; k <= val; k++)
        {

            cout << "*" << endl;
        }
        val++;
        if (val % 2 != 1)
        {
            val++;
        }
    }
}

// output:-
// **
// *
// ****
// *
// *
// *
// ********
// *
// *
// *
// *
// *