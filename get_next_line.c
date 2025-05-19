/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:37:55 by ebenoist          #+#    #+#             */
/*   Updated: 2025/05/19 17:03:27 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static	char* stach;
	char *buffer;
	ssize_t	by_read;
	char	*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_calloc((BUFFER_SIZE + 1),sizeof(char));
	if (!buffer)
		return(NULL);
	by_read = 1;
	while (by_read > 0 && !ft_strchr(stach, '\n'))
	{
		by_read = read(fd, buffer, BUFFER_SIZE);
		if (by_read <= 0)
		{
			free(buffer);
			return(NULL);
		}
		buffer[by_read] = '\0';
		stach = ft_strjoin(stach, buffer);
		if(!stach)
		{
			free(buffer);
			return(NULL);
		}
	}
	free(buffer);
	tmp = ft_line(stach);
  	stach = ft_save(stach);
	return(tmp);
}

char	* ft_save(char * str)
{
	int		i;
	char	*dest;
	int		j;
	int		k;
	
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if(str[i] == '\n')
		i++;
	j = ft_strlen(str);
	dest = ft_calloc((j - i) + 1, sizeof(char));
	if(!dest)
		return (NULL);
	k = 0;
	while (i < j)
		dest[k++] = str[i++];
	dest[k] = '\0';
	free(str);
	return (dest);
}
char * ft_line(char	*str)
{
	int		i;
	char	*s;
	int j;

	j = 0;
	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if(str[i] == '\n')
		i++;
	s = ft_calloc((i) + 1, sizeof(char));
	if(!s)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return(s);
}
