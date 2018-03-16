/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcutuntil.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:03:27 by tdragos           #+#    #+#             */
/*   Updated: 2018/01/15 19:07:31 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcutuntil(char **src, int c)
{
	int		i;
	char	*newstr;

	if (src == NULL || *src == NULL)
		return (NULL);
	i = 0;
	while ((*src)[i] != '\0' && (*src)[i] != (unsigned char)c)
		i++;
	if (!(newstr = ft_strnew(i)))
		return (NULL);
	ft_strncat(newstr, *src, i);
	if ((*src)[i] == '\0' || (*src)[i + 1] == '\0')
		*src = ft_strshorten(src, 0, 0);
	else
		*src = ft_strshorten(src, i + 1, ft_strlen(*src) - i - 1);
	return (newstr);
}
