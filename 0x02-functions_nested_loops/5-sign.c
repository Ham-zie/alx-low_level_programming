#include "holberton.h"
/**
 * Description: Print_sign - a function that prints the sign of a number
 * main - Entry code
 * @void - Means no argument
 * Return: zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
