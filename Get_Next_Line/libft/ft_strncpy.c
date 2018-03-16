/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:38:20 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/02 02:24:32 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t mx;

	i = 0;
	mx = ft_strlen(src);
	while (i < len)
	{
		if (i > mx)
		{
			dst[i] = '\0';
		}
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
