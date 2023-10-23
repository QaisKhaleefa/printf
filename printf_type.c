/**
 * printf_type - select the exatcly type
 * @args: number of arguements
 * @pr: the printed characters
 * @format: the format specifier
 * Return: pr charcaters
 */

int printf_type(const char *format, va_list args, int pr)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			pr = printf_integer(args, pr);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			pr++;
			break;
		case 's':
			pr = printf_str(args, pr);
			break;
		case '%':
			_putchar('%');
			pr++;
			break;
		case 'b':
			pr = printf_binary(va_arg(args, unsigned int), pr);
			break;
		case 'x':
		case 'X':
			pr = printf_hex(va_arg(args, unsigned int), pr, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			pr = printf_octal(va_arg(args, unsigned int), pr);
			break;
		case 'u':
			pr = printf_unsig(va_arg(args, unsigned int), pr);
			break;
		case 'r':
			pr = printf_rev(args, pr);
			break;
		case 'p':
			pr = printf_pointer(args, pr);
			break;
		default:
			break;
	}
	return (pr);
}
