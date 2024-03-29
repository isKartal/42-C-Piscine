/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:23:44 by iskartal          #+#    #+#             */
/*   Updated: 2023/02/02 03:12:10 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar (a / 10 + 48);
			putchar (a % 10 + 48);
			write(1, " ", 1);
			putchar (b / 10 + 48);
			putchar (b % 10 + 48);
			if (a != 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
