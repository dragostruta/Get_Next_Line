/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strshorten.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:59:20 by tdragos           #+#    #+#             */
/*   Updated: 2018/01/15 19:02:25 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strshorten(char **s, int start, int len)
{
	char	*newstr;
	int		len_s;

	len_s = (int)ft_strlen(*s);
	if (!s || !(*s) || start >= len_s)
		return (NULL);
	if (start + len > len_s)
		len = len_s - start;
	if (!(newstr = ft_strsub(*s, start, len)))
		return (NULL);
	ft_strdel(s);
	*s = newstr;
	return (*s);
}
