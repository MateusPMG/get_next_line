/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:36:42 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/25 19:51:41 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checklen(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
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
	while (p[i] && fl[i])
	{
		p[i] = fl[i];
		i++;
	}
	j = 0;
	while (p[i] && bf[j] && bf[j] != '\n')
		p[i++] = bf[j++];
	if (bf[j] == '\n')
		p[i++] = bf[j];
	p[i] = '\0';
	return (p);
}

int	ft_reset_buffer(char *buffer)
{
	
}
