#include <iostream>
using namespace std;

void pattern19()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i * 5; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
        {
            for (int k = 0; k < i; k++)
            {
                cout << "*\n";
            }
        }
    }
}

// output:-
// ******
// *
// ***********
// *
// *
// ****************
// *
// *
// *
// *********************