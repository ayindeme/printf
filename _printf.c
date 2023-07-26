#include "main.h"
/**
 * _printf - print to stdout formatted text
 *
 * @format: format specifier
 *Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned	int	p,	str_count,	count	=	0;

	va_list	args;

	va_start(args,	format);

	for	(p	=	0;	format[p]	!=	'\0';		p++)
	{
		if	(format[p]	!=	'%')
		{
			my_putch(format[p]);
		}

		else	if	(format[p]	==	'%'	&&	format[p	+	1]	==	'c')
		{
			my_putch(va_arg(args,	int));
			p++;
		}
		else	if	(format[p	+	1]	==	's')
		{
			str_count	=	putst(va_arg(args,	char	*));
			p++;
			count	+=	(str_count	-	1);
		}
		else	if	(format[p	+	1]	==	'%')
		{
			my_putch('%');
		}
		count++;
	}

	va_end(args);
	return	(count);
}
