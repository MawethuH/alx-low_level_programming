#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - ...
 * @a: ...
 * @b: ...
 * Return: int.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - ...
 * @a: ...
 * @b: ...
 * Return: int.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - ...
 * @a: ...
 * @b: ...
 * Return: int.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ...
 * @a: ...
 * @b: ...
 * Return: int.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - ...
 * @a: ...
 * @b: ...
 * Return: int.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
