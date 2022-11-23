/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:36:19 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/23 18:47:15 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE

BUFFER_SIZE = 3;

#  include <unistd.h>

char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*ft_allocate_return_buffer(char *s);
char	*ft_allocate_buffer(void);
void	*ft_memcpy(void *dest, const void *src, size_t n);

# endif