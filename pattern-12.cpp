#include <iostream>
using namespace std;

void pattern12()
{
    int n = 7;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}