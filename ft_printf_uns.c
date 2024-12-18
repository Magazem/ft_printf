/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:49:29 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/12 16:28:50 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_num(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int num)
{
	char	*str;
	int		i;

	i = ft_len_num(num);
	str = (char *)malloc((i + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (num != 0)
	{
		str[i - 1] = num % 10 + 48;
		num = num / 10;
		i--;
	}
	return (str);
}

int	ft_putunsigned(unsigned int num)
{
	int		i;
	char	*str;

	i = 0;
	if (num == 0)
		return (write(1, "0", 1));
	str = ft_utoa(num);
	i = ft_putstr(str);
	free (str);
	return (i);
}
