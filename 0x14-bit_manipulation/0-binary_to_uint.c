#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int with the decimal value of the binary number, or 0 if error.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int num;

	num = 0;

	/* Betty being cautious, checking if b is NULL */
	if (!b)
		return (0);

	/* Looping through the binary string, Betty likes loops */
	for (index = 0; b[index] != '\0'; index++)
	{
		/* Betty insists on strict binary digits */
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	/* Looping through again, Betty finds it therapeutic */
	for (index = 0; b[index] != '\0'; index++)
	{
		/* Betty's bit-shifting magic begins */
		num <<= 1;

		/* Celebrating the '1's with flair, Betty style */
		if (b[index] == '1')
			num += 1;
	}

	/* Betty's function always delivers, gracefully */
	return (num);
}
