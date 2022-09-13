#include <stdio.h>

/**
 * main - Write a program that prints _putchar, followed by a new line.
 *
 * Return Always 0 (Success)

 */

int main(void)
{
char *sh = "Holberton";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
