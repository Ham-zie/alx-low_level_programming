#include "main.h"
/**
 * main - Entry point
 * This program _islower - a function that checks for
 * lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int main(void)
{
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
}
