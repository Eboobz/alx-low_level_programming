#include <stdio.h>
#include "main.h"

/**
 * print_number - prints numbers from 0 - 9 with not repitition
 * Takes voide pointer to void
 * Return: 0;
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar (i);
	}
	_putchar ("\n");
}
