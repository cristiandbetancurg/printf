#include "holberton.h"
/**
* fe_2 - more 2 add
* @vl: valist
* Return: 2
*/
int fe_2(va_list vl)
{
	(void)vl;
	return (2);
}
/**
 * fe_1 - print -1 for indicate error
 * @vl: unused valist
 * Return: -1
 */
int fe_1(va_list vl)
{
	(void)vl;
	return (-1);
}
/**
 * f_char - print char
 * @vl: char inside valist
 * Return: 1
 */
int f_char(va_list vl)
{
	char c;

	c = (char)va_arg(vl, int);
	_putchar(c);
	return (1);
}

/**
* f_string - print string
* @vl: string inside valist
* Return: size of string
*/
int f_string(va_list vl)
{
	char *word;
	int i = 0, n = 0;

	word = va_arg(vl, char*);

	if (word == NULL)
	{
		word = "(null)";
		n = 0;
	}

	while (word != NULL && word[i] != '\0')
	{
		_putchar(word[i]);
		n++;
		i++;
	}
	return (n);
}
/**
* f_int - print var int
* @vl: int inside valist
* Return: number of the digits
*/
int f_int(va_list vl)
{
	long int n = 0, nDigits = 1, strNumber;
	unsigned int tmpStrN, safe_copy;

	strNumber = va_arg(vl, int);

	if (strNumber < 0)
	{
		tmpStrN = -strNumber;
		_putchar('-');
		n++;
	}
	else if (strNumber == 0)
	{
		_putchar('0');
		return (1);
	}
	else
		tmpStrN = strNumber;
	safe_copy = tmpStrN;
	while (tmpStrN > 9)
	{
		tmpStrN = (tmpStrN / 10);
		nDigits = (nDigits * 10);
	}
	while (nDigits > 0)
	{
		_putchar(((safe_copy / nDigits) % 10) + '0');
		nDigits = (nDigits / 10);
		n++;
	}
	return (n);
}
