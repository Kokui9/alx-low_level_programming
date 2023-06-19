#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
char back;
for (back = 'z'; back >= 'a'; back--)
putchar(back);
putchar('\n');
return (0);
}
