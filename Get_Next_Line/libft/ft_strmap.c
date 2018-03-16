/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 01:09:43 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/05 21:57:14 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	size_t	str_size;
	size_t	i;
	char	*map;

	if (s == NULL)
		return (NULL);
	str_size = ft_strlen(s);
	map = (char*)malloc(sizeof(char) * (str_size + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (i < str_size)
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
