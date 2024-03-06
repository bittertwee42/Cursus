/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:17:46 by fchieric          #+#    #+#             */
/*   Updated: 2024/03/06 17:22:04 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putnbr_u(n / 10);
		count += ft_putnbr_u(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

static int	dispatch(va_list ap, char f)
{
	if (f == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (f == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (f == 'd' || f == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (f == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	else if (f == 'x' || f == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int), f));
	else if (f == 'p')
		return (ft_putptr(va_arg(ap, uintptr_t)));
	else
		return (ft_putchar(f));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
			printed += dispatch(ap, format[++i]);
		else
			printed += ft_putchar(format[i]);
		++i;
	}
	va_end(ap);
	return (printed);
}
