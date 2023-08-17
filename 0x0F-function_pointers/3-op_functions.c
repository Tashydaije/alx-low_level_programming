#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference between two no.s
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of division of two no.s
 * @a: first number
 * @b: second number
 *
 * Return: the reminder of division a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
