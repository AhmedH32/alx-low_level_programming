#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed to it
 * @format: the format to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int actlen, uselen, i = 0;
	va_list ap;
	char *str;

	va_start(ap, format);
	if (format == NULL)
		return;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, char));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, float));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		while (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
