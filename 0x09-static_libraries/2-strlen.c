#include "main.h"
/**
 * Description: _strlen - returns the length of the string
 * @s: string 
 * return: length
 */
int _strlen(char *s)
{
	int lendi = 0;
	while (*s != '\0')
	{
		lendi++;
		s++;
	}
	return (lendi);
}
