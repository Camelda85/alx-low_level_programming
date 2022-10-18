#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char alpha;

	for (ten = 0; ten <= 9; ten++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);

		_putchar(10);
	}
}
