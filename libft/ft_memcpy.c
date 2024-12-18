/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:33:40 by ysuliman          #+#    #+#             */
/*   Updated: 2024/03/04 17:17:49 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*ref;

	i = 0;
	temp = (unsigned char *)dest;
	ref = (unsigned char *)src;
	while (i < num)
	{
		temp[i] = (unsigned char)ref[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

struct {
  char name[40];
  int age;
} person, person_copy;

int main ()
{
  char myname[] = "Pierre de Fermat";

  ft_memcpy ( person.name, myname, strlen(myname)+1 );
  person.age = 46;

  ft_memcpy ( &person_copy, &person, sizeof(person) );

  printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age );

  return 0;
}*/
