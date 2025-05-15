/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:37:55 by ebenoist          #+#    #+#             */
/*   Updated: 2025/05/15 16:05:34 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static	char* line;
	int	count;
	char	*stach;
	char *buffer[BUFFER_SIZE + 1];
	ssize_t	by_read;

	if (fd < 0 || buffer_size <= 0)
		return (0);
	while (line = ft_strchr(fd, '\n'))
	{
		by_read = read(fd, stach, BUFFEUR_SIZE);
		line = ft_strjoin(line , stach);
		return (line);
	}
	return (NULL);
}


ssize_t read(int fd, void *buf//lendroit ou mettre les donner lu,
		 size_t count//octet a lire)
{
	ssize_t i;
	return = 0;
	if (!buf || !fd)
	{
		i = -1;
		return (i);
	}	
	while (i < count || buf)
	{
		buf[i] = fd[i];
		i++;
	}
	return (i)// -1 errruer, 0fin de fichier // >0 byte lue
}

// main lecture sortie clavier
int main(void)
{
	char buffer[100];
	ssize_t bytes;

	// lire jusqu'à 99 caractères depuis l'entrée standard (clavier)
	bytes = read(0, buffer, 99);
	if (bytes > 0)
	{
		buffer[bytes] = '\0'; // ajouter le \0 pour en faire une chaîne
		write(1, buffer, bytes); // écrire sur la sortie standard
	}
	return (0);
}