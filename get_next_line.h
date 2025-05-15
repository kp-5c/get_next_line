/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:38:13 by ebenoist          #+#    #+#             */
/*   Updated: 2025/05/15 12:54:54 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GER_NEXT_LINE_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);
ssize_t read(int fd, void *buf, size_t count);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char*s);
char	*ft_strchr(const char *string, int searched);

#endif /* GET_NEXT_LINE */