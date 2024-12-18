/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:32:20 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/12 15:44:01 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_ptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	while (ptr != 0)
	{
		ptr = ptr / 16;
		i++;
	}
	return (i);
}

int	ft_print_ptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_print_ptr(ptr / 16);
		ft_print_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + 48);
		else
			ft_putchar((ptr - 10 + 'a'));
	}
	return (ft_count_ptr(ptr));
}

int	ft_putptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i = write(1, "0x", 2);
	i = i + ft_print_ptr(ptr);
	return (i);
}
