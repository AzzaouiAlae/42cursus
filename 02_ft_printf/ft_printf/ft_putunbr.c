/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:01:32 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 15:20:24 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned long num)
{
	unsigned int	nb;
	unsigned long	c;

	nb = (unsigned int)num;
	c = (unsigned long)(nb % 10 + 48);
	nb /= 10;
	if (nb > 0)
		ft_putunbr((unsigned long)nb);
	ft_print_char(c);
}
