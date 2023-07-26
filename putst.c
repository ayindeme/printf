#include "main.h"
/**
 *putst - print string
 *
 *@c: string
 *Return: number of bytes
 */
int	putst(char	*c)
{
	int	count	=	0;

	if	(c)
	{
		for	(count	=	0;	c[count]	!=	'\0';	count++)
		{
			putch(c[count]);
		}
	}
	return	(count);
}
