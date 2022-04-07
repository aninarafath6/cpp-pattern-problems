#include <iostream>
using namespace std;

void pattern5()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i * 3; j++)
        {
            cout << "*";
        }
        cout << endl;
        // endl means "\n";
        if (i < n)
        {

            for (int k = 1; k <= i * 3; k++)
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
// *
// *
// *
// *
// *
// *
// *********