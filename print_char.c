#include "main.h"

/************************* PRINT CHAR *************************/

/**
 * print_char - Prints a char
 * @types: list a of arguments
 * @buffer: buffer array used to handle print
 * @flags:  calculates the active flags
 * @width: width
 * @precision: precision specification
 * @size: size specifier
 * Return: number of chars that printed
*/
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
