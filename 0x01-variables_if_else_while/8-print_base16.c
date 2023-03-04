#include <stdio.h>
/**
* main - print all the numbers in base 16 in lowercase
* followed by a new line
* Return: Always 0
*/
int main(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
