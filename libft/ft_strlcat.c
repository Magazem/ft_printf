/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:31:58 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/07 20:28:14 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	i;
	size_t	len_s;

	if (!dest || size == 0)
		return (ft_strlen(src));
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	i = 0;
	if (len_d >= size)
		return (len_s + size);
	while (src[i] && (len_d + i < size - 1))
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
