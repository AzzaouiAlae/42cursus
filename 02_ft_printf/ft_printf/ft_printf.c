/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:13:11 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 15:59:10 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	char_in_str(char *s, char c, int s_size)
{
	int	i;

	i = 0;
	while (s && (i < s_size || *s))
	{
		if (*s++ == c)
			return (1);
		i++;
	}
	return (0);
}

static void	choose_function(char c, va_list *ptr)
{
	struct s_function	*list;
	int					i;

	list = ft_func_list();
	i = 0;
	while (list[i].ch)
	{
		if (list[i].ch == c)
			list[i].func(va_arg(*ptr, unsigned long));
		i++;
	}
}

static void	start_print(const char *format, va_list *ptr)
{
	int	i;

	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%' && char_in_str("cspdiuxX", format[i + 1], 0))
			choose_function(format[++i], ptr);
		else if (format[i] == '%' && format[i + 1] == '%')
			ft_print_char(format[i++]);
		else if (format[i] == '%' && char_in_str("\0", format[i + 1], 1))
			ft_is_error_occurred(-1, 0);
		else
			ft_print_char(format[i]);
		i++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;

	va_start(ptr, format);
	ft_is_error_occurred(0, 1);
	ft_count(0, 1);
	start_print(format, &ptr);
	va_end(ptr);
	return (ft_count(0, 0));
}
