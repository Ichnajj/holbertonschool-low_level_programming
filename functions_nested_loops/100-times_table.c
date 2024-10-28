#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table starting with 0.
 * @n: The number for which to print the times table.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j != 0)
                printf(", ");
            printf("%2d", i * j);
        }
        printf("\n");
    }
}