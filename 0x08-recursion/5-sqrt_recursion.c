#include "main.h"
/**
 * Description: actual_sqrt_recursion - recurses to findthe natural
 * square root of a number 
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
