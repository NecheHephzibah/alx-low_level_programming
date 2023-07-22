#include <stdio.h>


/**
* main - function prints the numbers 1 - 100
* with the multples of 3 and 5 outputting
* Fizz and Buzz respectively and multiples of both 3 and 5
* will output FizzBuzz.
*
* Return: 0
*/


int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
        {
            printf("FizzBuzz");
        }
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}
		if (count < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
