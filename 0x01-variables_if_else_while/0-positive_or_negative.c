#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is 0\n", n);
}
else if (n == 0)
{
printf("%d is negative\n", n);
}
return (0);
}