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
	static	int	j;
	char	*temp;
	char	*newline;
	char buffer[BUFFER_SIZE + 1];
	ssize_t	by_read;

	by_read = 1;
	buffer = ft_calloc((char) * (BUFFER_SIZE));
	while ((by_read > 0) && (!ft_strchr(buffer,'\n')))
	{
		by_read = read(fd, buffer, BUFFER_SIZE);
		buffer[by_read] = '\0';
			stach = ft_strjoin(temp, buffer);
		newline = ft_line(stach);
			return (newline);
		temp = ft_strchr(buffer, '\n');	
	}
	return (NULL);
}

char * ft_line(char	*str)
{
	int		i;
	char	*s;
	static	j;

	if (!str)
		return (NULL);
	j++;
	i = j;
	while ((str[i]) && (str[i] != '\n'))
		i++;
	if(str[i] == '\n')
		i++;
	s = ft_calloc(char)*(i));
	if(!s)
		return (NULL);
	while (j < i)
	{	
		s[j] = str[j];
		j++;
	}
	s[j] = '\n';
	return(s);
}

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
	char *line;

	printf("Tape des lignes (Ctrl+D pour quitter) :\n");
	while ((line = get_next_line(0)) != NULL) // fd 0 = clavier
	{
		printf(">> %s", line); // afficher ce que tu lis
		free(line); // libérer la mémoire retournée
	}

	printf("\nFin du programme.\n");
	return (0);
}


