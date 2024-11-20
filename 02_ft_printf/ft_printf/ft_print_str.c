/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:57:38 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 16:03:13 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(unsigned long num)
{
	char	*s;

	s = (char *)num;
	if (!s)
		s = "(null)";
	while (s && *s)
		ft_print_char(*s++);
}
