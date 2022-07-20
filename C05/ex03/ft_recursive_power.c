/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:47:18 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/18 16:08:44 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	i = 0;
	if (power == 0)
		return (1); 
	return (nb * ft_recursive_power(nb, power - 1));
}
