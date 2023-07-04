#include "main.h"

/**
 * _isupper - checks if the case study is an upper letter.
 * @c: checks if the letter is upper.
 * Return: 0
*/

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);

	else
		return (0);
}
