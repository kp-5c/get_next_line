/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:38:13 by ebenoist          #+#    #+#             */
/*   Updated: 2025/05/19 16:34:58 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *string, int searched);
void	*ft_calloc(size_t ecount, size_t size);
char * ft_line(char	*str);
char	*get_next_line(int fd);
char	* ft_save(char * str);

#endif /* GET_NEXT_LINE */