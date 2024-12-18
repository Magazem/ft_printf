/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:33:02 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/07 12:18:38 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		n;
	char		*res;

	res = (char *)str;
	if (!*to_find || (str == NULL && !len))
		return (res);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		n = 0;
		while (str[i + n] == to_find[n] && str[i] != '\0' && len > (i + n))
		{
			if (to_find[n + 1] == 0)
				return (res + i);
			n++;
		}
		i++;
	}
	return (NULL);
}
