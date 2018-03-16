/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:14:12 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/02 00:07:38 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	size_t			i;
	void			*p;
	unsigned char	*c;

	p = malloc(size);
	if (p == NULL)
		return (NULL);
	c = (unsigned char *)p;
	i = 0;
	while (i < size)
	{
		c[i] = 0;
		i++;
	}
	return (p);
}
