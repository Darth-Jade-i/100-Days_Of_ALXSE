#include "jade.h"

/**
 * j_abs - funds the absolute value of an integer
 * @num: abs parameter
 * Return: returns non-negetive value of integer
 */

int j_abs(int num)
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
