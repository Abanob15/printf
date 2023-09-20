#include "main.h"

/**
 * is_printable - evaluates if the char is printable
 * @c: char that will be evaluated
 *
 * Return: (1) if c is printable, (0) if not
*/
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - append ascci in the hexadecimal code to buffer
 * @buffer: array of chars
 * @i: index in which used to start appending
 * @ascii_code: ASSCI CODE
 * Return: (3)
*/
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - verifies if a specified char is a digit
 * @c: char that will be evaluated
 *
 * Return: (1) if c is a digit, (0) if not
*/
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - casts number to the specified size
 * @num: number that will be casted
 * @size: number indicating the type that will be casted
 *
 * Return: the casted value of num
*/
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - casts number to the specified size
 * @num: number that will be casted
 * @size: number indicating the type will be casted
 *
 * Return: the casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
