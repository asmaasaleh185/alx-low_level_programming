#include "variadic_functions.h"
/**
 * format_char - formats char
 * @separator: string separator
 * @ap: pointer argument
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int -formats int
 * @separator: string separator
 * @ap: pointer argument
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float -formats float
 * @separator: string separator
 * @ap: pointer argument
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string -formats string
 * @separator: string separator
 * @ap: pointer argument
 */
void format_string(char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	printf("%s%s", s ? s : "(nil)",
		i ? (separator ? separator : "") : "\n");
}

/**
 * print_all -prints anything
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", formate_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_strat(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
