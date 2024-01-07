/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:58:33 by iskartal          #+#    #+#             */
/*   Updated: 2024/01/07 19:58:35 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (-1);
	while (i < size && min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}
