#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
int f;
for (f = '0'; f<= '9'; f++)
{
putchar(f);
if (f != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
