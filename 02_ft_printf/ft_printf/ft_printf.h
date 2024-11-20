/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:13:08 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 15:59:14 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

struct				s_function
{
	char			ch;
	void			(*func)(unsigned long);
};

int					ft_count(int n, int first_time);
struct s_function	*ft_func_list(void);
int					ft_is_error_occurred(int n, int first_time);
void				ft_print_char(unsigned long num);
int					ft_printf(const char *format, ...);
void				ft_print_str(unsigned long num);
void				ft_print_ptr(unsigned long num);
void				ft_putnbr(unsigned long num);
void				ft_putunbr(unsigned long num);
void				ft_print_uppercase_hex(unsigned long n);
void				ft_print_lowercase_hex(unsigned long n);

#endif