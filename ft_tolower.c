/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welease <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:39:55 by welease           #+#    #+#             */
/*   Updated: 2020/10/31 21:57:01 by welease          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_up_alpha(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int			ft_tolower(int c)
{
	if (ft_is_up_alpha(c))
		return (c + 32);
	return (c);
}
