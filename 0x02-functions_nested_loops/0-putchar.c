/*
 * This program prints _putchar on a newline
 */
#include <main.h>
/**
 * main- Entry point
 * @void- means no argument
 * Return: zero
 */
int main(void)
{
	char *sh = "_putchar";
	/*
	 * statement to print
	 */
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	/*
	 * Printing a newline
	 */
	_putchar('\n');
	return (0);
}
