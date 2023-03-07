#include "main.h"

/**
* _memset -  Fills the first n bytes of the memory area
* pointed to by @s with the constant bytee @c.
* @s: A pointer to the memory area to be filled.
* @b: The character to fill the memory areai with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
char insert = b;
unsigned int i = 0;
for (i = 0; i < n; i++)
{
p[i] = insert;
}
return (s);
}
