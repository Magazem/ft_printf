/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:34:56 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/07 20:39:33 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0' && *str != c)
		str++;
	if (!ft_isascii(c))
	{
		str = (char *)s;
		return (str);
	}
	if (*str == c)
		return (str);
	return (NULL);
}
