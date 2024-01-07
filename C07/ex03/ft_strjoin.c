/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:58:02 by iskartal          #+#    #+#             */
/*   Updated: 2024/01/07 19:58:05 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		index;
	int		j;
	int		count;

	new_str = malloc(sizeof(strs));
	index = 0;
	count = 0;
	while (index < size)
	{
		j = 0;
		while (strs[index][j] != '\0')
		{
			new_str[count] = strs[index][j];
			count++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && index < size - 1)
			new_str[count++] = sep[j++];
		index++;
	}
	new_str[count] = '\0';
	return (new_str);
}
