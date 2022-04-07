#include <iostream>
using namespace std;

void pattern2()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i * 3; j++)
        {

            cout << "*";
        }
        cout << "\n";
        for (int k = 0; k < i; k++)
        {
            cout << "*\n";
        }
    }

    // output:-
    // ***
    // *
    // ******
    // *
    // *
    // *********
    // *
    // *
    // *
}