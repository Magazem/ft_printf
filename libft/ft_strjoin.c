/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:30:41 by ysuliman          #+#    #+#             */
/*   Updated: 2024/02/29 17:06:01 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*s;

	if (s2 == 0 || s1 == 0)
		return (NULL);
	len_1 = ft_strlen((char *)s1);
	len_2 = ft_strlen((char *)s2) + len_1;
	s = malloc(len_2 + 1);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, (char *)s1, len_1 + 1);
	ft_strlcat(s, (char *) s2, len_2 + 1);
	return (s);
}
