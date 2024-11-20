/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:01:32 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 16:03:52 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(unsigned long num)
{
	int				n;
	long			nb;
	unsigned long	c;

	n = (int)num;
	nb = (long)n;
	if (nb < 0)
	{
		nb = -nb;
		ft_print_char((unsigned long) '-');
	}
	c = (unsigned long)(nb % 10 + 48);
	nb /= 10;
	if (nb > 0)
		ft_putnbr((unsigned long)nb);
	ft_print_char(c);
}
