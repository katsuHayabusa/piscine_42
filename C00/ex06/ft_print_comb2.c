/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:48:52 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/08 13:07:40 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;		
	int	b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		while (++b <= 99)
		{
			ft_putchar((char)(a / 10) + '0');
			ft_putchar((char)(a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(b / 10) + '0');
			ft_putchar((char)(b % 10) + '0');
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	b = ++a;
	}
}
