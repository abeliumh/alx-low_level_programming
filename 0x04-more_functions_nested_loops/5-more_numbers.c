#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: a serie of number 10 times
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 14 ; y++)
		{
			if (y >= 10)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
