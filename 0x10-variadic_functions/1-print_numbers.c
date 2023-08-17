#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator used
 * @n: number of arguments
 *
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0; i < ((int)n - 1); i++)
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		printf("%d", va_arg(args, int));
	}
	else
	{
		for (i = 0; i < ((int)n); i++)
			printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
