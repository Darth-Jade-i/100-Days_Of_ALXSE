#include "jade.h"

/**
 * j_abs_i - funds the absolute value of an integer
 * @num: abs parameter
 * Return: returns non-negetive value of integer
 */

int j_abs_i(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}

/**
 * j_absf - finds the absolute value of a float
 * @num: abs parameter
 * Return: returns non-negetive value of float
 */

float j_abs_f(float num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
