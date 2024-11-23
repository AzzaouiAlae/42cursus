/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:56:32 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/23 11:58:28 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

struct			s_data
{
	char		*s_rest;
	char		*s;
	char		*s_data;
	int			size_of_s;
};

struct s_data	*get_s_data(int fd);
int				str_char(char *s, char ch);
char			*ft_strdup_char(char *s, char ch);
char			*str_copy(char *dst, char *src);
char			*get_next_line(int fd);
#endif
