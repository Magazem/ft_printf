/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:35:59 by ysuliman          #+#    #+#             */
/*   Updated: 2024/02/29 12:27:40 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_;
	const char	*src_;

	dest_ = (char *)dest;
	src_ = (const char *)src;
	if (src_ < dest_ && dest_ < src_ + n)
	{
		src_ += n;
		dest_ += n;
		while (n--)
		{
			*--dest_ = *--src_;
		}
	}
	else
	{
		while (n--)
		{
			*dest_++ = *src_++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "memmove can be very useful......";
  ft_memmove (str+20,str+15,11);
  puts (str);
  return 0;
}
*/
