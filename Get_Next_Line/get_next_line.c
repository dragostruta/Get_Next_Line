/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:50:08 by tdragos           #+#    #+#             */
/*   Updated: 2018/01/16 18:50:09 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		citeste(int fd, char **after)
{
	char		buf[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	if (!(*after))
		*after = ft_strnew(0);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		temp = ft_strjoin(*after, buf);
		if (*after)
			free(*after);
		*after = temp;
		if (ft_strrchr(*after, '\n'))
			return (1);
	}
	if (ret == 0 && ft_strlen(*after) > 0)
		return (1);
	return (ret);
}

void	endl(int index, char **before, char **original, char *after)
{
	int	j;

	j = 0;
	*before = ft_strnew(index);
	*before = ft_strncpy(*before, *original, index);
	index++;
	after = ft_strnew(ft_strlen(*original) - index);
	while ((*original)[index] != '\0')
		after[j++] = (*original)[index++];
	ft_strdel(original);
	*original = after;
}

void	cut(char **before, char **original)
{
	int		index;
	char	*after;

	index = 0;
	after = NULL;
	while ((*original)[index] != '\n' && (*original)[index] != '\0')
		index++;
	if ((*original)[index] == '\n')
		endl(index, before, original, after);
	else
	{
		*before = ft_strnew(ft_strlen(*original));
		*before = ft_strcpy(*before, *original);
		after = ft_strnew(0);
		ft_strdel(original);
		*original = after;
	}
}

int		get_next_line(const int fd, char **line)
{
	static char	*after[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	temp = ft_strnew(BUFF_SIZE);
	if (fd < 0 || !line || read(fd, 0, 0) < 0)
		return (-1);
	if (after[fd] && ft_strrchr(after[fd], '\n'))
	{
		cut(line, &after[fd]);
		return (1);
	}
	ret = citeste(fd, &after[fd]);
	if (ret == 1)
		cut(line, &after[fd]);
	else
		free(after[fd]);
	return (ret);
}
