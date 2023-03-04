#include <stdio.h>

/**
* main - print numbers in base 10
* followed by a new line
* Return: Always 0
*/
int main(void)
{
int base10;
for (base10 = 0; base10 < 10; base10++)
putchar((base10 % 10) + '0');
putchar('\n');
return (0);
}
