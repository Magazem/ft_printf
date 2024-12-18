/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:21:34 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/12 15:10:03 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = ft_strlen(str);
	write (1, str, i);
	return (i);
}

int	ft_putnum(int c)
{
	int		i;
	char	*str;

	str = ft_itoa(c);
	i = ft_putstr(str);
	free (str);
	return (i);
}
