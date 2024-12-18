/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:23 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/07 18:12:25 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*api;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	api = malloc(len + 1);
	if (!api)
		return (NULL);
	while (i < len)
	{
		api[i] = f(i, s[i]);
		i++;
	}
	api[i] = '\0';
	return (api);
}
