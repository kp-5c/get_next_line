/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:38:13 by ebenoist          #+#    #+#             */
/*   Updated: 2025/05/16 15:49:48 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char*s);
char	*ft_strchr(const char *string, int searched);
void	*ft_calloc(size_t ecount, size_t size);
char * ft_line(char	*str);
char	*get_next_line(int fd);

#endif /* GET_NEXT_LINE */