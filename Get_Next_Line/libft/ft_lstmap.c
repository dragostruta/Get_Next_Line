/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 00:36:26 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/08 01:02:18 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*p;
	t_list	*aux;
	t_list	*info;

	if (lst == NULL || f == NULL)
		return (NULL);
	info = f(lst);
	p = ft_lstnew(info->content, info->content_size);
	if (p == NULL)
		return (NULL);
	aux = p;
	while (lst->next)
	{
		lst = lst->next;
		info = f(lst);
		aux->next = ft_lstnew(info->content, info->content_size);
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
	}
	return (p);
}
