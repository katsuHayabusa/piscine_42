/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:17:45 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/22 12:49:43 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     is_goodchar(char c)
{
        if (c == ' ' || (c >= 9 && c <= 13))
                return (1);
        return (0);
}

int     is_valid_base(char *base)
{
        int     i;
        int     j;

        i = 0;
        if (size(base) < 2 || base[0] <= 47)
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

int     ft_atoi_base(char *str, char *base)
{
        int     i;
        int     sign;
        int     res;

        i = 0;
        sign = 1;
        res = 0;
        while (is_goodchar(str[i]) && str[i])
                i++;
        while (str[i] == '+' || str[i] == '-')
        {
                if (str[i] == '-')
                        sign *= -1;
                i++;
        }
	if (is_valid_base(base) && str[i])
	{
		
	}
	return (res * sign);
