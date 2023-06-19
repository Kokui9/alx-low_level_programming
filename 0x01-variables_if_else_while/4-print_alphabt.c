#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
char dat, q, e;
for (dat = 'a'; dat <= 'z'; dat++)
{
e = 'e';
q = 'q';
if (dat != e && dat != q)
{
putchar(dat);
}
}
putchar('\n');
return (0);
}
