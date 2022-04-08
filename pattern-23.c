/*
 ============================================================================
 Name        : pp.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //	prints !!!Hello World!!! */

    int i, j, k, h, n = 4;

    for (i = 0; i < n; i++)
    {
        // loop 1
        for (j = 0; j < n - i; j++)
        {
            printf("X");
        }
        printf("__\n");
        printf("_");

        // loop 2
        for (k = 0; k < n - i; k++)
        {

            printf("X");
        }
        printf("\n");

        // loop 3
        for (h = 0; h <= i; h++)
        {
            printf("X\n");
        }
    }

    return EXIT_SUCCESS;

}
// output:-
// XXXX__
// _XXXX
// X
// XXX__
// _XXX
// X
// X
// XX__
// _XX
// X
// X
// X
// X__
// _X
// X
// X
// X
// X
