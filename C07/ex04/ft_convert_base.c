/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:57:07 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/27 18:44:36 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     str_len(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

int     is_valid_base(char *base)
{
        int     i;
        int     j;

        i = 0;
        if (str_len(base) < 2 || base[0] <= 47)
                return (0);
        while (base[i])
        {
                j = i + 1;
                if (base[i] == '+' || base[i] == '-')
                        return (0);
                while (base[j])
                {
                        if (base[i] == base[j])
                                return (0);
                        j++;
                }
                i++;
        }
        return (1);
}

int	char_index(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	if (!is_valid_base(base_from))
		return (0);
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (char_index(base_from, nbr[i]))
	{
		res *= str_len(base_from);
		res += char_index(base_from, nbr[i]);
		i++;
	}
	return (res * sign);
}
