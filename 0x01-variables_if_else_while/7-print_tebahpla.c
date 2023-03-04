#include <stdio.h>
/**
* main - prints alphabet in lowercase reversely
* followed by a new line
* Return: Always 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
