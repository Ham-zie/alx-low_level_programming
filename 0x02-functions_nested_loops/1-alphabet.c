#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * @void - means no argument
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int n;
        for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
