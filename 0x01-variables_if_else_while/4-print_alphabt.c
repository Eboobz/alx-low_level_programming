#include <stdio.h>

/**
* main - print all alphabet except e and q
* followed by new line
* Return: Always 0
*/
int main(void)
{
char noeq;
for (noeq = 'a'; noeq = 'z'; noeq++)
{
if (noeq != 'e' && noeq != 'q')
putchar(noeq);
}
putchar('\n');
return (0);
}
