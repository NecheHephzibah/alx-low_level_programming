#include "main.h"

/**
* factorial - function that returns the factorial of a given number.
* @n: inputted number.
* Return: factorial of n
*/

int factorial(int n)
{
/*getting the base case first */
	if (n < 0)
    {
        return (-1);
    }
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
