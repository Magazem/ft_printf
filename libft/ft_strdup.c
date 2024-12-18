/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:32:09 by ysuliman          #+#    #+#             */
/*   Updated: 2024/02/29 14:25:28 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	char	*temp;

	temp = (char *)str1;
	str2 = malloc(ft_strlen(temp) + 1);
	if (str2 == 0)
		return (NULL);
	ft_strlcpy(str2, temp, ft_strlen(temp) + 1);
	return (str2);
}
