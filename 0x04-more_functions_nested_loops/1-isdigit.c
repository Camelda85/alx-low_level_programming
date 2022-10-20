#include "main.h"

/**
 * _isdigit - that checks if a char is a digit
 * @c: checks for digits
 * Return: 1 if c is digit ,0 otherwise
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= 0 && c <= 9)
		y = 1;

	return (y);
}
