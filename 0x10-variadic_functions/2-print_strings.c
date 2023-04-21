#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @seperator: The string to be pribted between numbers
 * @n: The number of intergers passed to the function
 * @...: A variable number of numbers to be printed
 *
 * Description: If a separator is NULL, it is not printed
 * If one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_strat(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			print("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
