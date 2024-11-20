/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:16:49 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 16:02:45 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

struct s_function	*ft_func_list(void)
{
	static struct s_function	lst[9] = {{'c', ft_print_char}, {'s',
		ft_print_str}, {'p', ft_print_ptr}, {'i', ft_putnbr}, {'d',
		ft_putnbr}, {'u', ft_putunbr}, {'X', ft_print_uppercase_hex}, {'x',
		ft_print_lowercase_hex}, {'\0', ft_print_char}};

	return (lst);
}
