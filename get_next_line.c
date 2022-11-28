/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:35:53 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/28 16:24:32 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	int			read_n;
	char		*full_line;

	if (fd < 0 || BUFFER_SIZE < 1 || fd > FOPEN_MAX)
		return (NULL);
	full_line = ft_allocate_join(0, buffer);
	if (ft_reset_buffer(buffer))
		return (full_line);
	read_n = read(fd, buffer, BUFFER_SIZE);
	if (read_n < 0 || (read_n == 0 && (!full_line || *full_line == '\0')))
		return (ft_freeline(full_line));
	while (read_n > 0)
	{
		full_line = ft_allocate_join(full_line, buffer);
		if (ft_reset_buffer(buffer))
			break ;
		read_n = read (fd, buffer, BUFFER_SIZE);
	}
	if (read_n == -1)
	{
		return (ft_freeline(full_line));
	}
	return (full_line);
}
