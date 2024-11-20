/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:46:58 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 11:58:16 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count(int n, int first_time)
{
	static int	count;

	if (first_time)
		count = 0;
	if (ft_is_error_occurred(n, 0) == -1)
		return (-1);
	count += n;
	return (count);
}
