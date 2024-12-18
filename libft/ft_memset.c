/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:34:03 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/04 17:18:15 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main ()
{
	char	str[] = "almost every programmer should know memset!";
	ft_memset (str, 'x', 6);
	puts (str);
	return 0;
}
*/
