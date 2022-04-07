#include <iostream>
using namespace std;

void pattern10()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i * 5; j++)
        {
            cout << "*";
        }
        cout << endl;
        for (int k = 1; k <= i * 2; k++)
        {
            cout << "*" << endl;
        }
    }
}