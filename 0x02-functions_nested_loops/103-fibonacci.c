#include <stdio.h>

/**
* main - finds and prints the sum of even
* values.
* Return: Always 0 (Success).
*/


int main(void)
{
	int hub;
	unsigned long int jub, kub, next, sum;

	jub = 1;
	kub = 2;
	sum = 0;

	for (hub = 1; hub <= 33; ++hub)
	{
		if (jub < 4000000 && (jub % 2) == 0)
		{
			sum = sum + jub;
		}
		next = jub + kub;
		jub = kub;
		kub = next;
	}
	printf("%lu\n", sum);

	return (0);
}
