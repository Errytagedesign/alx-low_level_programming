#include <stdio.h>

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
putchar(*sh);
sh++;
}
putchar('\n');
return (0);
  
}
