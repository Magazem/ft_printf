/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:04:52 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/12 15:47:21 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexalen(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

void	ft_print_hexa(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_print_hexa((num / 16), format);
		ft_print_hexa((num % 16), format);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (format == 'x')
				ft_putchar(num - 10 + 'a');
			if (format == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_puthexa(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_print_hexa(num, format);
	return (ft_hexalen(num));
}
