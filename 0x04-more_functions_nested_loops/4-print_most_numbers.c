#include "main.h"

/**
 * print_most_numbers - print numbes 0 to 9 except 2 and .
 * takes no argument values.
 *
 * Return: No specified return value.
 */
void print_most_numbers(void)
{
	int most_num = 48;

	while (most_num <= 57)
	{
		if (most_num == 50 || most_num == 52)
		{
			most_num++;
			continue;
		}
		else
		{
			_putchar(most_num);
			most_num++;
		}
		_putchar(10);
	}
}
