#include "main.h"

/**
 * print_unsigned - Function prints an unsigned number
 * @types: array a of args
 * @buffer: buffer array to print
 * @flags:  calculats the active flags
 * @width: width
 * @precision: precision specification
 * @size: size specifier
 * Return: number of chars that will be printed
*/
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
