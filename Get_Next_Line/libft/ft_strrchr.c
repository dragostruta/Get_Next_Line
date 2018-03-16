/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:33:47 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/02 02:58:18 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen(s);
	while (s[i] != c && s[i] != s[0])
	{
		i--;
	}
	if (s[i] == (unsigned char)c)
		return (char*)(s + i);
	return (NULL);
}
