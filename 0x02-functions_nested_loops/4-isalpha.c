#include "main.h"

/**
 * _isalpha - checks for alpha
 * @c: character to be checked
 *
 * Return: 1 if a character is a letter,0 otherwise
 */
int_isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
