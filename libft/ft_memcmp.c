/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:26:09 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/07 14:09:53 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)ptr1;
	str2 = (unsigned char *)ptr2;
	if (num == 0)
		return (0);
	while (*str1 == *str2 && num)
	{
		str1++;
		str2++;
		num--;
	}
	if (num == 0)
		return (0);
	else
		return (*str1 - *str2);
}
