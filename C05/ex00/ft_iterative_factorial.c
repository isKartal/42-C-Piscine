/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:07:38 by iskartal          #+#    #+#             */
/*   Updated: 2023/02/17 03:14:24 by iskartal         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
