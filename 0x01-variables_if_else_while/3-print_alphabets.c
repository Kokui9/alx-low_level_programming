#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
char cat;
for (cat = 'a'; cat <= 'z'; cat++)
putchar(cat);
for (cat = 'A'; cat <= 'Z'; cat++)
putchar(cat);
putchar('\n');
return (0);
}
