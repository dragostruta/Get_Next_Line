/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 00:06:29 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/08 01:03:31 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p;
	t_list	*aux;

	if (alst == NULL || (*alst) == NULL || del == NULL)
		return ;
	p = (*alst);
	while (p)
	{
		aux = p->next;
		ft_lstdelone(&p, del);
		p = aux;
	}
	(*alst) = NULL;
}
