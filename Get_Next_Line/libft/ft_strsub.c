/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 01:35:43 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/05 21:54:55 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char		*cp;
	size_t		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	cp = (char*)malloc(sizeof(char) * (len + 1));
	if (!cp)
		return (NULL);
	while (i < len)
	{
		cp[i] = s[start + i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
