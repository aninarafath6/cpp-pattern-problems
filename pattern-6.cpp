#include <iostream>
using namespace std;

void pattern6()
{
    int n = 5;
    int val = 0;
    for (int i = 1; i <= n; i++)

    {
        for (int j = 1; j <= (n * 2) - val; j++)
        {
            cout << "*";
        }
        val += 2;
        cout << endl;

        for (int k = 1; k <= i; k++)
        {
            cout << "*" << endl;
        }
    }
}

// output:-
// **********
// *
// ********
// *
// *
// ******
// *
// *
// *
// ****
// *
// *
// *
// *
// **
// *
// *
// *
// *
// *