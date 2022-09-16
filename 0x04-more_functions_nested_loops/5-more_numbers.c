#include "main.h"
/**
 * Description:  more_numbers - a funtion that prints 10 times the numbers
 * from 0 - 14
 * _putchar only 3times
 * Return: 0-14 x10 followed by new line 
 */
void more_numbers(void)
{	
	int i, ro;
	for (ro = 0; ro < 10; ro ++)
	{	
		for (i = 0; i <= 14; i++)
		{	
		 if (i >= 10)
		 {	
			 _putchar((i / 10) + '0');
		 }
		 _putchar((i % 10) + '0');
		}
	}
}
