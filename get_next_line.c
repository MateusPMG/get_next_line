/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:35:53 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/23 18:46:05 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	int		readbytes;

	buffer = ft_allocate_buffer(void);
	readbytes = read(fd, buffer, BUFFER_SIZE);


	return (return_buffer);
}
