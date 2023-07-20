#include <stdio.h>


/**
* main - computes and prints out the sum of
* all the multiples of 3 or 5 below 1024.
* Return: Always 0 (Success).
*/

int main(void)
{
	unsigned long int mib3, mib5, mib;
	int i;

	mib3 = 0;
	mib5 = 0;
	mib = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			mib3 = mib3 + i;
		}
		else if ((i % 5) == 0)
		{
			mib5 = mib5 + i;
		}
	}
	mib = mib3 + mib5;
	printf("%lu\n", mib);

	return (0);
}
