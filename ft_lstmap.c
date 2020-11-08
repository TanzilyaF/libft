/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welease <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:41:48 by welease           #+#    #+#             */
/*   Updated: 2020/11/01 14:42:20 by welease          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp1 = NULL;
	if (lst && f)
	{
		while (lst)
		{
			tmp = ft_lstnew((*f)(lst->content));
			if (!tmp)
			{
				ft_lstclear(&tmp1, del);
				return (NULL);
			}
			ft_lstadd_back(&tmp1, tmp);
			lst = lst->next;
		}
	}
	return (tmp1);
}
