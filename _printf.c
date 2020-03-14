#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	/** my variables */
	int i, j;
	/** initialize my list */
	va_list args;
	/** instance to my code */
	prinf fns[] =
	{
		{"s", fn_string},
		{"c", fn_char}
	};
	/** starting my list */
	va_start(args, format);

		/** iterating format */
		for (i = 0; format[i] != '\0'; i++)
		{
			/** checking if format is % */
			if (format[i] == "%")
			{
				i++;
				for (i = 0; j < 2; j++)
				{
					if (format[i] == fns[j]->identifier)
					{
						fns[j].f(args);
					}	
				}
			}
			else
			{
				_putchar(format[i]);
			}
		}
}