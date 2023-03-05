#include <stdio.h>

/**
* main - print all possible combinations of three numbers
* followed by a new line
* Return: Always 0
*/
int main(void)
{
int c, a, m;
for (c = 48; c < 57; c++)
{
for (a = 49; a < 58; a++)
{
for (m = 50; m < 58; m++)
{
if (m > a && a > c)
{
putchar(c);
putchar(a);
putchar(m);
if (c != 56 || a != 57 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
