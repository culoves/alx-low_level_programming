#include <stdio.h>

/**
 * main - main block
 *
 * Description - Remove letter's e and q
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');

return (0);
}
