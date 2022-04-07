#include <iostream>
using namespace std;

void pattern3()
{
    cout << "*\n";
    for (int i = 1; i <= 3; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int e = 1; e <= i * 3; e++)
        {
            cout << "*";
        }

        cout << endl;
    }
}