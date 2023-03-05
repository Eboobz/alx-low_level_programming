#include <stdio.h>

/**
* main - print all possible ombinations of three numbers
* followed by a new line
* Return: Always 0
*/
int main(void)
{
int c, a;
for (c = 148; c < 157; c++)
{
for (a = 149; a < 158; a++)
{
if (a > c)
{
putchar(c);
putchar(a);
if (c != 156 || a != 157)
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
