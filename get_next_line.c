
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:37:55 by ebenoist          #+#    #+#             */
/*   Updated: 2025/05/16 16:08:01 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static	char* stach;
	char buffer[BUFFER_SIZE + 1];
	ssize_t	by_read;
	char	*tmp;

	by_read = 1;
	buffer[0] = '\0';
	while ((by_read > 0) && (!ft_strchr(buffer,'\n')))
	{
		by_read = read(fd, buffer, BUFFER_SIZE);
		buffer[by_read] = '\0';
		stach = ft_strjoin(stach, buffer); 

	}
	if ((by_read == 0) ||ft_strchr(buffer, '\n'))
	{	
		stach = ft_strjoin(stach, buffer);
		tmp = ft_line(stach);
		free (stach);
		stach = tmp;
		free(tmp);
		return(stach);
	}
	return (NULL);
}


char * ft_line(char	*str)
{
	int		i;
	char	*s;
	static	int j;
	int	k;

	if (!str)
		return (NULL);
	i = j;
	while ((str[i]) || (str[i] != '\n'))
		i++;
	if(str[i] == '\n')
		i++;
	s = ft_calloc((i - j) + 1, sizeof(char));
	if(!s)
		return (NULL);
	k = 0;
	while (j < i)
	{	
		s[k++] = str[j++];
	}
	s[k] = '\0';
	return(s);
}


