#include <iostream>
using namespace std;

void pattern17()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < i * 3; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        if (i < n)
        {
            for (int y = 0; y < 3; y++)
            {
                cout << "*" << endl;
            }
        }
    }
}

// output:-
// ***
// *
// *
// *
// ******
// ******
// *
// *
// *
// *********
// *********
// *********