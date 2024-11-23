/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:08:10 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/23 11:50:37 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_realloc(char *s, int *s_size, int should_free)
{
	int		len;
	int		size;
	char	*str;

	len = 16;
	size = 0;
	while (s && s[size])
		size++;
	while (len < BUFFER_SIZE + size + 1)
		len *= 2;
	str = malloc(sizeof(char) + (len + 1));
	if (!str)
	{
		if (s && should_free)
			free(s);
		*s_size = 0;
		return (NULL);
	}
	str_copy(str, s);
	*s_size = len + 1;
	if (s && should_free)
		free(s);
	return (str);
}

int	check_rest_data(struct s_data *data)
{
	int	i;

	i = 0;
	if (str_char(data->s_rest, '\n'))
	{
		data->s = ft_strdup_char(data->s_rest, '\n');
		return (1);
	}
	if (data->s_rest[i])
	{
		data->s_data = ft_realloc(data->s_rest, &data->size_of_s, 0);
		if (!data->s_data)
		{
			data->s = NULL;
			return (1);
		}
	}
	return (0);
}

int	read_line(struct s_data *data, int fd, int *result, int *len)
{
	if ((*len) + BUFFER_SIZE + 1 > data->size_of_s)
		data->s_data = ft_realloc(data->s_data, &data->size_of_s, 1);
	if (!data->s_data)
		return (-1);
	*result = read(fd, &data->s_data[*len], BUFFER_SIZE);
	*len += *result;
	if (*result == -1 || !(*len))
		return (-1);
	data->s_data[*len] = '\0';
	if (*result != BUFFER_SIZE || str_char(&data->s_data[(*len) - BUFFER_SIZE],
			'\n'))
	{
		data->s = ft_strdup_char(data->s_data, '\n');
		if (data->s)
			str_copy(data->s_rest, data->s_data);
		else
			return (-1);
		free(data->s_data);
		data->s_data = NULL;
		return (1);
	}
	return (0);
}

int	read_data(struct s_data *data, int fd)
{
	int	result;
	int	len;
	int	r;

	len = 0;
	while (data->s_data && data->s_data[len])
		len++;
	while (1)
	{
		r = read_line(data, fd, &result, &len);
		if (r == -1)
		{
			if (data->s_data)
				free(data->s_data);
			data->s_rest[0] = '\0';
			free(data);
			return (-1);
		}
		if (r == 1)
			return (1);
	}
}

char	*get_next_line(int fd)
{
	struct s_data	*data;
	char			*str;

	data = get_s_data(fd);
	if (!data)
		return (NULL);
	if (check_rest_data(data))
	{
		str = data->s;
		free(data);
		return (str);
	}
	if (read_data(data, fd) == -1)
		return (NULL);
	str = data->s;
	free(data);
	return (str);
}
