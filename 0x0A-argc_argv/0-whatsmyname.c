#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always returns 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    // Print the first argument (program name)
    printf("%s\n", *argv);

    return (0);
}
