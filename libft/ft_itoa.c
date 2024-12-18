/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:37:57 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/06 18:07:34 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill(char *str, int len, int start, int n)
{
	while (len > start)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

size_t	get_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	start;
	char	*str;

	start = 0;
	len = get_len(n);
	str = malloc((sizeof(char)) * len + 1);
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		start = 2;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		start = 1;
	}
	fill(str, len, start, n);
	str[len] = '\0';
	return (str);
}
