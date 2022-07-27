/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:57:07 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/27 13:20:35 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_iterative_power(int nb, int power)
{
        int     res;
        int     i;

        i = 1;
        res = 1;
        if (power < 0)
                return (0);
        while (i <= power)
        {
                res *= nb;
                i++;
        }
        return (res);
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

int	convert_base10(char *nbr, char *base)
{
	int	i;
	int	pow;
	int	res;

	i = 0;
	res = 0;
	while (base[i])
		i++;
	while (base[i])
	{
		res += 
	}





}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	j;

	i = 0;
	if (!is_valid_base(*base_from) || !is_valid_base(*base_to))
		return (NULL);
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;

}
