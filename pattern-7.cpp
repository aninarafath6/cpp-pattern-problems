#include <iostream>
using namespace std;

void pattern7()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i * 5; k++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
        {
            for (int j = 1; j <= i * 3; j++)
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