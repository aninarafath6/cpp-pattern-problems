#include <iostream>
using namespace std;

void pattern11()
{
    int flag = 1, n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= flag; j++)
        {
            cout << "*" << endl;
        }
        flag = flag == 1 ? 3 : 1;
        for (int k = 1; k <= i * 2; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// output:-
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
// *
// **********