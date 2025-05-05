/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:57:11 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/05 14:31:13 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*read_save(int fd, char *stash);
char	*extract_line(char *stash);
char	*clean_save(char *stash);

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);

#endif