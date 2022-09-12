#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers in base 10
 * using only putchar funcion, not more than twice
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
