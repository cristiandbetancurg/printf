#include "holberton.h"
/**
* _printf - print the values
* Description: twin of prinfts
* @format: text and format values
* @...: values
*
* Return: length of: values and text
*/
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list vl;

	if (format == NULL)
		return (-1);
	va_start(vl, format);
	while (format != NULL && format[i] != '\0')
	{
		int next = i + 1;

		if (format[i] == '%' && format[next] == '%' && format[next + 1] == '%')
		{
			i = i + 1;
			next = i + 1;
			_putchar('%');
		}
		else if ('%' == format[i])
		{
			if ('%' == format[next])
			{
				_putchar('%');
				i++;
			}
			else if (format[next] == 'i' || format[next] == 'd' || format[next] == 's'
			|| format[next] == 'c')
			{
				count--;
				count += (f_controller(format[next]))(vl);
				i++;
			}
			else
				_putchar('%');
		}
		else
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(vl);
	return (count);
}
