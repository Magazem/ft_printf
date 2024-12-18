/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:36:04 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/12 13:05:22 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_putptr(va_arg(args, unsigned long long)));
	if (format == 'd' || format == 'i')
		return (ft_putnum(va_arg(args, int)));
	if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), format));
	if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			num = num + ft_arg(args, format[i + 1]);
			i++;
		}
		else
			num = num + ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (num);
}
