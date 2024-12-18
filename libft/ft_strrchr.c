/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:35:15 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/07 20:40:24 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != 0)
		i++;
	while (str[i] != c && i > 0)
		i--;
	if (!ft_isascii(c))
		return (str);
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}
