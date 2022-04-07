#include <iostream>
using namespace std;

void pattern13()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= 2; k++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int y = 1; y <= i * 3; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// output:-)
//  *
//  *
//  ***
//  **
//  **
//  ******
//  ***
//  ***
//  *********