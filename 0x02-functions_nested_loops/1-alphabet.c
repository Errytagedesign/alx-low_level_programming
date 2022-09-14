#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
  int n;

  for (n = 'a'; n <= 'z'; n++)
    {
      putchar(n);
    }
  putchar('\n');
}
