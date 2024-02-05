/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:17:46 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/05 18:39:26 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

static int	dispatch(va_list ap, const char f)
{
	int	count;

	count = 0;
	if (f == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (f == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if ((f == 'd' || f == 'i') || f == 'u')
		count += ft_putnbr(va_arg(ap, int));
	else if (f == 'p' || (f == 'x' || f == 'X'))
		count += ft_putnbr_base(va_arg(ap, unsigned int));
	else
		count += ft_putchar(f);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(ap, format);
	va_arg(ap);
	while (format[i])
	{
		if (format[i] == '%')
			printed += dispatch(&ap, format[i++]);
		else
			printed += ft_putchar(format[i]);
		++i;
	}
	va_end(ap);
	return (printed);
}
