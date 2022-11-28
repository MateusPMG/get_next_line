/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:36:42 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/28 14:49:42 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_checklen(char *s)
{
	int	i;

	if (!s || !*s)
		return (0);
	i = 0;
	while (s && s[i] && s[i] != '\n')
		i++;
	if (s && s[i] == '\n')
		i++;
	return (i);
}

char	*ft_allocate_join(char *fl, char *bf)
{
	char	*p;
	int		i;
	int		j;

	p = (char *)malloc(sizeof(char) * (ft_checklen(fl) + ft_checklen(bf) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (p && fl && fl[i])
	{
		p[i] = fl[i];
		i++;
	}
	j = 0;
	while (p && bf[j] && bf[j] != '\n')
		p[i++] = bf[j++];
	if (p && bf[j] == '\n')
		p[i++] = bf[j];
	p[i] = '\0';
	return (p);
}

int	ft_check_newline(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n' && s[i])
		i++;
	if (s[i] == '\n')
		return (1);
	return (0);
}

char	*ft_reset_buffer(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i] != '\n' && buffer[i])
		i++;
	while (buffer[i++ + j])
	{
		buffer[j] = buffer [i + j];
		j++;
	}
	if (buffer[(i - 1) + j] == '\0')
	{
		while (buffer[j++])
			buffer[j] = '\0';
	}
	return (buffer);
}
