

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //	prints !!!Hello World!!! */

    int i, j, k, n = 3;

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("X X\n");
        }

        for (j = 1; j <= i; j++)
        {
            printf("_ ");
        }
        for (j = 1; j <= pow(2, i); j++)
        {
            printf("X ");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
