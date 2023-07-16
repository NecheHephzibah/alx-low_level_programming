#include <stdio.h>


/**
 * main - Entry point of the program,
 * initializes input count to print out
 * numbers from 1-9.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{

    int count = 0;

    while (count < 10)
    {
        putchar(count + '0');
        count++;
    }

    putchar('\n');

    return (0);
}
