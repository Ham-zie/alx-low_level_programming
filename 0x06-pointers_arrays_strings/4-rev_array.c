#include "main.h"
/**
 * Description: reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of arrat
 * main: check the code
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;
	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
