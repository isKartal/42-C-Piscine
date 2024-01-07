/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:58:47 by iskartal          #+#    #+#             */
/*   Updated: 2024/01/07 19:58:49 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*n;
	int	x;

	x = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	n = (int *)malloc(x * sizeof(int));
	while (i < x)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
