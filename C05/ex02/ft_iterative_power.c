/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:24:46 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/18 15:43:57 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return res;
}

int main(void)
{
	int i = 5;
	printf("%d", ft_iterative_power(i, 2));
}
