/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:36:50 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:36:52 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*gnl_strjoin(char *s1, const char *s2);
char	*get_joined_buffer(char *buffer, int fd);
char	*get_next_line(int fd);

#endif  /* GET_NEXT_LINE_BONUS_H */
