/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:51:24 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/08 00:05:32 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*p;
	void	*mamaluigabi;

	p = (t_list *)malloc(sizeof(t_list));
	if (p == NULL)
		return (NULL);
	p->next = NULL;
	if (content == NULL)
	{
		p->content = NULL;
		p->content_size = 0;
	}
	else
	{
		mamaluigabi = malloc(content_size);
		if (mamaluigabi == NULL)
			return (NULL);
		ft_memmove(mamaluigabi, content, content_size);
		p->content = mamaluigabi;
		p->content_size = content_size;
	}
	return (p);
}
