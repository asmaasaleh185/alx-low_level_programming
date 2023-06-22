#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: number of arguments
 * @...: strings to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
