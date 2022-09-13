#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * main - uses built-in function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
