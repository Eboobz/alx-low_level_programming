#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The int to print
* Return: 0
*/

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s char *accept);
char *strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8];
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
#endif /* MAIN_H */
