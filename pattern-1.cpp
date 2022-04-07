#include <iostream>
using namespace std;

void pattern1()
{
    for (int i = 1; i <= 3; i++)

    {
        for (int j = 0; j < i * 2; j++)
        {
            cout << "*";
        }
        cout << '\n';
        if (i < 3)
        {
            for (int k = 1; k <= i * 3; k++)
            {
                cout << "*\n";
            }
        }
    }
    // output:-
    //
    // **
    // *
    // *
    // * **** *
    // *
    // *
    // *
    // *
    // * ******
}