/*
 * This program prints _putchar on a newline
 */
#include "stdio.h"
/**
 * main- Entry point
 * @void- means no argument
 * Return: zero
 */
int main(void)
{
	char *i = "Hamzie";
	/*
	 * statement to print
	 */
	while (*i)
	{
		putchar(*i);
		i++;
	}
	/*
	 * Printing a newline
	 */
	putchar('\n');
	return (0);
}
