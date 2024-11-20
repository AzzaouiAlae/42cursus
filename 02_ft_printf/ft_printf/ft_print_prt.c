/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_prt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:12:47 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 15:58:55 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(unsigned long num)
{
	char	*hex;
	char	hex_to_printf[20];
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	if (num == 0)
	{
		ft_print_str((unsigned long)"(nil)");
		return ;
	}
	while (i < 20)
		hex_to_printf[i++] = '\0';
	i = 0;
	ft_print_str((unsigned long)"0x");
	while (num > 0)
	{
		hex_to_printf[i++] = hex[num % 16];
		num /= 16;
	}
	while (--i >= 0)
		ft_print_char((unsigned long)hex_to_printf[i]);
}
