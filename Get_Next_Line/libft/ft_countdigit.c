/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 22:03:32 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/07 23:23:34 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countdigit(long long n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}