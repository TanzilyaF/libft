/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welease <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:39:20 by welease           #+#    #+#             */
/*   Updated: 2020/10/31 21:55:50 by welease          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_low_alpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int			ft_toupper(int c)
{
	if (ft_is_low_alpha(c))
		return (c - 32);
	return (c);
}
