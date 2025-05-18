/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:08:18 by ebenoist          #+#    #+#             */
/*   Updated: 2025/05/16 15:50:06 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2[len])
	{
		dest[i] = s2[len];
		i++;
		len++;
	}
	dest[i] = '\0';
	return (dest);
}

 char	*ft_strdup(const char*s)
{
	char	*dest;
	int		i;
	int		size;

	size = 0;
	while (s[size])
		size++;
	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr(const char *string, int searched)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if ((unsigned char)string[i] == (unsigned char)searched)
			return ((char *)&(string[i]));
		i++;
	}
	if ((unsigned char)searched == '\0')
		return ((char *)&(string[i]));
	return (NULL);
}

void	*ft_calloc(size_t ecount, size_t size)
{
	unsigned char	*tab;
	size_t			total;
	size_t			i;

	total = ecount * size;
	tab = malloc(ecount * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < total)
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}