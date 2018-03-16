/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 21:54:49 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/06 21:58:10 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int sg;
	int p;

	sg = n % 10;
	n /= 10;
	if (sg < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		sg = -sg;
	}
	if (n != 0)
	{
		p = 1;
		while (p * 10 <= n)
			p = p * 10;
		while (p != 0)
		{
			ft_putchar_fd('0' + (n / p % 10), fd);
			p = p / 10;
		}
	}
	ft_putchar_fd(sg + '0', fd);
}
