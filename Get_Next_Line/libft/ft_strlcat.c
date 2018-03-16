/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 19:28:54 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/08 01:46:09 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		ok;

	ok = 0;
	i = 0;
	while (i <= size)
	{
		if (dst[i] == '\0')
		{
			ok = 1;
			i = size;
		}
		i++;
	}
	if (ok == 0)
		return (size + ft_strlen(src));
	ok = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	while (i < size - 1 && src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ok + ft_strlen(src));
}
