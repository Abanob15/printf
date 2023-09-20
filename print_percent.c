#include "main.h"

/************************* PRINT PERCENT SIGN *************************/
/**
 * print_percent - function that prints percent sign
 * @types: lista of arguments
 * @buffer: buffer array that used to handle print
 * @flags:  alculates the active flags
 * @width: get width
 * @precision: precision specification
 * @size: size specifier
 * Return: number of chars to be printed
*/
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
