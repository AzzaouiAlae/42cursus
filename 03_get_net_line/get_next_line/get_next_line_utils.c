/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:08:16 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/23 11:19:09 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

struct s_data	*get_s_data(int fd)
{
	static char		s_rest[1025][BUFFER_SIZE + 1];
	struct s_data	*data;

	if (fd >= 0 && fd <= 1024)
	{
		data = (struct s_data *)malloc(sizeof(struct s_data));
		if (!data)
			return (NULL);
		data->s = NULL;
		data->s_data = NULL;
		data->s_rest = s_rest[fd];
		data->size_of_s = 0;
		return (data);
	}
	return (NULL);
}

int	str_char(char *s, char ch)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == ch)
			return (i + 1);
		i++;
	}
	return (0);
}

char	*str_copy(char *dst, char *src)
{
	int	i;

	i = 0;
	if (!src || !dst)
		return (dst);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup_char(char *s, char ch)
{
	int		len;
	char	*str;

	len = 0;
	while (s && s[len] && (!len || s[len - 1] != ch))
		len++;
	if (!len)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	len = 0;
	while (s && s[len] && (!len || s[len - 1] != ch))
	{
		str[len] = s[len];
		len++;
	}
	str[len] = '\0';
	str_copy(s, &s[len]);
	return (str);
}
