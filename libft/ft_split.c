/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:24:03 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/06 16:33:07 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*splitter(char **split, char c, char const *s, size_t count)
{
	size_t	i;
	size_t	n;
	size_t	r;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			i++;
		}
		r = 0;
		while (s[i] != c && s[i])
		{
			r++;
			i++;
		}
		if (n < count)
		{
			split[n] = ft_substr(s, i - r, r);
			n++;
		}
	}
	return (split);
}

size_t	counter(char const *s, char c)
{
	size_t	count;
	size_t	inside;

	count = 0;
	inside = 0;
	while (*s)
	{
		while (*s == c && *s)
		{
			s++;
		}
		inside = 0;
		while (*s != c && *s)
		{
			if (!inside)
			{
				count++;
				inside = 1;
			}
			s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**split;

	count = counter(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	split[count] = NULL;
	splitter(split, c, s, count);
	return (split);
}
