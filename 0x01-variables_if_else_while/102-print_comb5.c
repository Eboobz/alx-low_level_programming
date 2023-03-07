#include <stdio.h>

/**
* main - print all possible ombinations of two-digit numbers
* followed by a new line
* Return: Always 0
*/
int main(void)
{
int c, a;
for (c = 0; c < 100; c++)
{
for (a = 0; a < 100; a++)
{
if (c < a)
{
putchar((c / 10) + 48);
putchar((c % 10) + 48);
putchar(' ');
putchar((a / 10) + 48);
putchar((a % 10) + 48);
if (c != 98 || a != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
