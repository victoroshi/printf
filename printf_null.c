#include "main.h"

/**
 * printf_null - Checks pointer is NULL
 * @format: character to be checked
 *
 * Return: Nothing.
 */
void printf_null(const char *format)
{
	if (!format)
	{
		write(1, "Error\n", 6);
		exit(98);
	}
}
