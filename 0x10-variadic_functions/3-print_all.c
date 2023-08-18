#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: format of the args
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *s = "";
	char *letter;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(args, double));
					break;
				case 's':
					letter = va_arg(args, char *);
					if (!letter)
						letter = "(nil)";
					printf("%s%s", s, letter);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
