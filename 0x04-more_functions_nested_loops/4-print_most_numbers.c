#include <main.h>

/**
 * print_most_numbers - this prootoype prints numbers for 0 - 9
 *
 * Returns: nothing or void
*/

void print_most_numbers(void)

{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		_putchar(a);
	}
	_putchar ('\n');
}
