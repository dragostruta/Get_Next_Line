/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 22:05:59 by tdragos           #+#    #+#             */
/*   Updated: 2017/12/06 20:45:02 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		word_number(const char *s, char c, int wr)
{
	int wor;
	int i;
	int nr;

	i = 0;
	wor = 0;
	nr = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		wor++;
		if (s[i + 1] == c)
		{
			nr++;
			if (nr == wr)
				return (wor);
			wor = 0;
			while (s[i + 1] == c)
				i++;
		}
		i++;
	}
	return (wor);
}

static	int		space_number(const char *s, char c)
{
	int			sp;
	int			i;

	sp = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			sp++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (sp);
}

static	void	alocare(const char *s, char c, char **tab, int sp)
{
	int			i;
	int			j;
	int			nw;

	j = 0;
	i = 0;
	nw = 0;
	while (i < sp)
	{
		while (j < word_number(s, c, i + 1))
		{
			while (s[nw] == c)
				nw++;
			tab[i][j] = s[nw];
			nw++;
			j++;
		}
		tab[i][j] = '\0';
		j = 0;
		i++;
	}
}

char			**ft_strsplit(const char *s, char c)
{
	char		**tab;
	int			sp;
	int			i;

	if (s == NULL)
		return (NULL);
	sp = space_number(s, c);
	tab = (char **)malloc(sizeof(char *) * (sp + 1));
	if (tab == NULL)
		return (NULL);
	i = -1;
	while (i++ <= sp)
	{
		tab[i] = (char *)malloc(sizeof(char *) * \
				(word_number(s, c, i + 1) + 1));
		if (tab[i] == NULL)
			return (NULL);
	}
	alocare(s, c, tab, sp);
	tab[sp] = NULL;
	return (tab);
}
