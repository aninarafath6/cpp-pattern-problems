#include <iostream>
using namespace std;

void pattern4()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "*\n";
        }
        for (int j = 1; j <= i * 4; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }

    //   output :-
    //     *
    //     ****
    //     *
    //     *
    //     ********
    //     *
    //     *
    //     *************
}