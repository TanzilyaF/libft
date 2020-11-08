/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welease <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:07:06 by welease           #+#    #+#             */
/*   Updated: 2020/11/08 17:22:01 by welease          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	long long int	len;
	size_t			i;

	i = 0;
	len = (long long)n;
	if ((destination == NULL) && (source == NULL))
		return (NULL);
	if (destination - source > 0)
	{
		while (--len >= 0)
			((unsigned char *)destination)[len] = ((unsigned char*)source)[len];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)destination)[i] = ((unsigned char*)source)[i];
			i++;
		}
	}
	return (destination);
}
