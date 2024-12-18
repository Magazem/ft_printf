/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:36:27 by ysuliman          #+#    #+#             */
/*   Updated: 2024/02/27 19:05:33 by ysuliman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	r;

	i = 0;
	n = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] > '\b' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10 + (str[i] - 48));
		i++;
	}
	return (n * r);
}
/*
#include <stdio.h>       
#include <stdlib.h>    

int main ()
{
  int i;
  char buffer[256];
  printf ("Enter a number: ");
  fgets (buffer, 256, stdin);
  i = ft_atoi (buffer);
  printf ("The value entered is %d. Its double is %d.\n",i,i*2);
  i = atoi (buffer);
  printf ("The value entered is %d. Its double is %d.\n",i,i*2);
  return 0;
}
*/
