/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:35:34 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/07 20:50:45 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t c)
{
	size_t	i;

	i = 0;
	while (str1[i] != 0 && i < c - 1 && str1[i] == str2[i])
		i++;
	if (i == c)
		return (0);
	if (!ft_isascii(str1[i]))
		return (1);
	if (!ft_isascii(str2[i]))
		return (-1);
	return (str1[i] - str2[i]);
}
