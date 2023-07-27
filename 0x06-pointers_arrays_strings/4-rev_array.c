#include "main.h"
#include <string.h>

/**
* reverse_array - function that reverses the content of an array.
* @a: the array itself.
*
* @n: the the size of the contents in the array.
*.
* Return: 0.
*/

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp;

		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}

}
