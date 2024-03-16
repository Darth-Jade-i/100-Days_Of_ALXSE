#include "jade.h"

/**
 * j_parity_i - A Jade function
 * @num_i: integer parameter
 * Description - Function detremines parity
 * of integer input.
 * Return: returns nothing.
 */

void j_parity_i(int num_i)
{
	if (j_abs_i(num_i) % 2 == 0)
	{
		printf("%d is an even number.\n", num_i);
	}
	else
	{
		printf("%d is an odd number.\n", num_i);
	}
}

/**
 * j_parity_f - A Jade function
 * @num_f: Float parameter
 * Description - Function detremines parity
 * of float input.
 * Return: returns nothing.
 */

void j_parity_f(int num_f)
{
	if (j_abs_i(num_f) % 2 == 0)
	{
		printf("%d is an even number.\n", num_f);
	}
	else
	{
		printf("%d is an odd number.\n", num_f);
	}
}
