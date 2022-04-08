

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //	prints !!!Hello World!!! */

    int i, j, k, h, n = 3;

    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n - i + 1; k++)
        {
            printf("X");
        }
        printf("\n");
        for (k = 0; k < n - i; k++)
        {
            printf("X");
        }
        if ((i + 1) < n)
        {
            printf("\nX\nX\n");
        }
    }

    return EXIT_SUCCESS;
}

// output:-
// XXXX
// XXX
// X
// X
// XXX
// XX
// X
// X
// XX
// X