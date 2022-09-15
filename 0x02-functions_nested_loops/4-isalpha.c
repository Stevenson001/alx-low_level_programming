#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 * @c: Takes argument value c, or int data type.
 *
 * Return: 1 if true, 0 otherwise.
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}
