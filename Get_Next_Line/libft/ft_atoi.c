/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 15:04:37 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/14 18:52:26 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ct_new_dig(int i, const char *str, int sg)
{
	int		new_dig;
	int		ok;

	ok = 0;
	new_dig = 0;
	while (ft_isdigit(str[i]) == 1)
	{
		if (str[i] != 0 && ok == 0 && sg == 1)
		{
			new_dig = new_dig * -1;
			ok = 1;
		}
		if (sg == 0)
			new_dig = new_dig * 10 + (str[i] - '0');
		if (sg == 1)
			new_dig = new_dig * 10 - (str[i] - '0');
		i++;
	}
	return (new_dig);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		new_dig;
	int		fd_dig;
	int		sg;

	i = 0;
	new_dig = 0;
	fd_dig = 0;
	sg = 0;
	while (ft_isdigit(str[i]) == 0)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
				&& str[i] != '-' && str[i] != '+' && str[i] != '\f'
				&& str[i] != '\r' && str[i] != '\v')
			return (0);
		if ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]) == 0)
			return (0);
		if (str[i] == '-' && ft_isdigit(str[i + 1]) == 1)
			sg = 1;
		i++;
	}
	return (ct_new_dig(i, str, sg));
}
