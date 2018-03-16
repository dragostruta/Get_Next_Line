/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:49:10 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/02 04:26:42 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp(const char *big, size_t i, const char *little, size_t j)
{
	int		ok;

	ok = 0;
	while (big[i] == little[j] && big[i] != '\0')
	{
		i++;
		j++;
		ok++;
	}
	if (ok == (int)ft_strlen(little))
		return (1);
	else
		return (0);
}

char		*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;

	if (little[0] == '\0')
		return ((char *)(big));
	i = 0;
	j = 0;
	while (big[i] != '\0')
	{
		if (big[i] != little[j])
			i++;
		else
		{
			if (comp(big, i, little, j) == 1)
				return ((char *)(big + i));
			j = 0;
			i++;
		}
	}
	return (NULL);
}
