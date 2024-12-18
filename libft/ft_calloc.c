/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:45:51 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/11 13:14:26 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	bytes;
	void	*ptr;

	bytes = nitems * size;
	if (size && ((bytes / size) != nitems))
		return (NULL);
	ptr = malloc(nitems * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
