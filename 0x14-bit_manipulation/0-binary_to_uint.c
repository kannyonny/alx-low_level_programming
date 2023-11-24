#include "main.h"

/**
 * binary_to_uint - Betty's special function that converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: An unsigned int with the decimal value of the binary number, or 0 if there's an error
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int num;

	num = 0;

	/* Betty's checking if b is NULL, always being cautious */
	if (!b)
		return (0);

	/* Betty loves loops, let's iterate through the binary string */
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

		/* Adding a touch of flair, Betty celebrates the '1's */
		if (b[index] == '1')
			num += 1;
	}

	/* Betty's function always delivers, gracefully */
	return (num);
}
