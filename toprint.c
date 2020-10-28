#include "holberton.h"
/**
* f_controller - function controller
* @cs: conversion specifier
* Return: 1 or -1
*/
int (*f_controller(char cs))(va_list)
{
	int i = 0;
	managerF managerArr[] = {
		{'c', f_char},
		{'i', f_int},
		{'d', f_int},
		{'s', f_string},
		{'\0', fe_1}};

	while (managerArr[i].cs != '\0')
	{
		if (cs == managerArr[i].cs)
			return (managerArr[i].f);
		i++;
	}
	if (cs == '\0')
	{
		return (fe_1);
	}
	else
	{
		_putchar('%');
		_putchar(cs);
		return (fe_2);
	}
	return (0);
}
