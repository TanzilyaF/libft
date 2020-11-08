/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welease <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:42:58 by welease           #+#    #+#             */
/*   Updated: 2020/11/01 14:13:39 by welease          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_in_set(char const *set, char s)
{
	if (set == NULL)
		return (0);
	while (*set)
	{
		if (*set == s)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i1;
	size_t	i;
	char	*res;
	size_t	len;

	i1 = 0;
	i = 0;
	if (s1 == NULL)
		return (res = malloc(0));
	while (find_in_set(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (find_in_set(set, s1[len - i - 1]))
		i++;
	if (ft_strlen(s1) <= i)
		return (ft_strdup(""));
	if ((res = (char *)malloc(len - i + 1)) == NULL)
		return (NULL);
	while (i1 <= len - i - 1)
	{
		res[i1] = s1[i1];
		i1++;
	}
	res[i1] = '\0';
	return (res);
}
