#include <stdio.h>

/**
* main - prints the sum of all the multiples of 3
* or 5 below 1024 (excluded).
* Return: Always 0 (Success).
*/

int main(void)
{
	int count;
	unsigned long mib1 = 0, mib2 = 1, sum;
	unsigned long mib1_half1, mib1_half2, mib2_half1, mib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = mib1 + mib2;
		printf("%lu, ", sum);
		mib1 = mib2;
		mib2 = sum;
	}
	mib1_half1 = mib1 / 10000000000;
	mib2_half1 = mib2 / 10000000000;
	mib1_half2 = mib1 % 10000000000;
	mib2_half2 = mib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = mib1_half1 + mib2_half1;
		half2 = mib1_half2 + mib2_half2;
		if (mib1_half2 + mib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
		{
			printf(", ");
		}
		mib1_half1 = mib2_half1;
		mib1_half2 = mib2_half2;
		mib2_half1 = half1;
		mib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
