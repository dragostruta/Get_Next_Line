/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 21:57:07 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/07 23:24:50 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*help_itoa(int p, char *str, int n)
{
	int i;
	int sg;

	i = 0;
	if (n < 0)
		str[i++] = '-';
	sg = n % 10;
	n /= 10;
	if (sg < 0)
	{
		n = -n;
		sg = -sg;
	}
	while ((p = p / 10) != 0)
		str[i++] = '0' + (n / p % 10);
	str[i++] = '0' + sg;
	str[i] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		p;

	i = ft_countdigit(n);
	if (n >= 0)
		str = (char *)malloc(sizeof(char ) * (i + 1));
	else
		str = (char *)malloc(sizeof(char ) * (i + 2));
	if (str == NULL)
		return (NULL);
	p = ft_pow(10, i - 1);
	return (help_itoa(p, str, n));
}
