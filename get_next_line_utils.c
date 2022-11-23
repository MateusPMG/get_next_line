/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:36:42 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/23 18:49:11 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	if (!p1 && !p2)
		return (p1);
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (p1);
}

char	*ft_allocate_rbuff_pfilter(char *s)
{
	char	*return_buffer;
	int		strinlen;

	strinlen = ft_strlen(s);
	while (*s)
	{
		if (*s = )
		{
			return_buffer = (char *)malloc(sizeof(char) * l);
			if (!return_buffer)
				return (NULL);
		}
	}
	return (return_buffer);
}

char	*ft_allocate_buff(void)
{
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (NULL);
	return (buffer);
}
