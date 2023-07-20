#include <stdio.h>

/**
* main - prints the first 50 fibonaci numbers, starting
* with 1 and 2.
* Return: Always 0 (Success).
*/

int main(void)
{
	long int hub, jub, kub, next;

	jub = 1;
	kub = 2;

	for (hub = 1; hub <= 50; ++hub)
	{
		if (jub != 20365011074)
		{
			printf("%ld, ", jub);
		}
		else
		{
			printf("%ld\n", jub);
		}
		next = jub + kub;
		jub = kub;
		kub = next;
	}

	return (0);
}
