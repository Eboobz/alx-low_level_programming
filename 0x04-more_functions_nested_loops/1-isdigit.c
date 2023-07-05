#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks whether the it is a digit or not.
 * @c: the pointer to int.
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);

}
