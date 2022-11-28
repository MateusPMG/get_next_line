/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:35:53 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/28 13:51:04 by mpatrao          ###   ########.fr       */
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
	read_n = 1;
	full_line = "";
	while (read_n > 0)
	{
		if (!buffer)
			read_n = read (fd, buffer, BUFFER_SIZE);
		full_line = ft_allocate_join(full_line, buffer);
		if (ft_check_newline(full_line))
			break ;
		read_n = read (fd, buffer, BUFFER_SIZE);
	}
	ft_reset_buffer(buffer);
	return (full_line);
}
