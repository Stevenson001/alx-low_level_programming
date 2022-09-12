#include<stdio.h>

/**
 * main - entry and exit point of program
 * no argument
 *
 * Description: prints the alphabet in lower case then upper case
 * Return: return 0 on success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++) /* lowercase alpha in ascii */
		putchar(i);
	for (i = 65; i < 91; i++) /* uppercase alpha in ascii */
		putchar(i);
	putchar(10); /* newline ascii */
	return (0);
}
