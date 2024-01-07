/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 08:34:03 by iskartal          #+#    #+#             */
/*   Updated: 2023/02/13 09:05:27 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	ib;
	int	ibk;

	ibk = 1;
	ib = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ibk *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ib = (ib * 10) + (str[i] - 48);
		i++;
	}
	ib *= ibk;
	return (ib);
}
