#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: the addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - function that returns the subtraction of two numbers.
* @a: The first number.
* @b: The second number.
* Return: The subtration of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - function that returns the multiplication of two numbers.
* @a: the first number.
* @b: the second number.
* Return: returns the product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - function that returns the division of two numbers.
* @a: The first number
* @b: the second number
* Return: the answer when a and b is divided
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - function that retturns the remainder
* of the division of two numbers.
* @a: the first number.
* @b: the second number.
* Return: returns the remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}

