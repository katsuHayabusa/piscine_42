/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:27:52 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/21 16:32:02 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len_distance(int a, int b)
{
	int	i;

	i = 0;
	while (a < b)
	{
		i++;
		a++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
		return ('\0');
	ptr = malloc(sizeof(int) * ft_len_distance(min, max));
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);


}
