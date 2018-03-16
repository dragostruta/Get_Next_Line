/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:30:48 by tdragos           #+#    #+#             */
/*   Updated: 2017/11/25 16:36:24 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dest, const char *sir)
{
	int		i;

	i = 0;
	while (sir[i] != '\0')
	{
		dest[i] = sir[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}