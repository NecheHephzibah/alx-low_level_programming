#include <stdlib.h>
#include <time.h>
#include <stdio.h>



/**
 * main - Entry point of the program, initializes input n to generate random number.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("The number is zero\n");
    }


    return (0);
}
