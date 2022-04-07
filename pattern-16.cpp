#include <iostream>
using namespace std;

void pattern16()
{
    int val = 1, n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < val; j++)
        {
            cout << "*" << endl;
        }
        val = val == 1 ? 3 : 1;
        for (int k = 0; k < i * 2; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// OUTPUT :-)
// *
// **
// *
// *
// *
// ****
// *
// ******
// *
// *
// *
// ********