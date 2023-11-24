#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 *             to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	/* Betty says, always add some space before loops */
	for (index = 63; index >= 0; index--)
	{
		/* Betty loves clarity, let's make the current bit clear */
		current = exclusive >> index;

		/* Betty enjoys counting bits, with style */
		if (current & 1)
			countbit++;
	}

	/* Betty appreciates a well-organized and clean code */
	return (countbit);
}
