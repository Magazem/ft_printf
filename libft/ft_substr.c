/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:40:30 by ysuliman          #+#    #+#             */
/*   Updated: 2024/02/29 16:27:50 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen((char *)s);
	if (start >= len_s)
		return (ft_strdup(""));
	len_s = len_s - start;
	if (len > len_s)
		len = len_s;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s + start, len + 1);
	return (str);
}
