#include <main.h>
/**
 * main - Entry point
 * _isalpha - a function that checks for alphabetic character
 * @void- No argument
 * @c: single letter input
 * Return: 1 if c is better (lower or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
