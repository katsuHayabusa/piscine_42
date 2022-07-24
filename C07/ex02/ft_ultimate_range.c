/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:12:28 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/24 16:15:51 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	res;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = '\0';
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
	{
		*range = '\0';
		return (-1);
	}
	while (i < max)
	{
		*range[i] = min + i;
		i++;
	}
	return (i);
}
