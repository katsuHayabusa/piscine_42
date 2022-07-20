/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:29:16 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/15 12:07:59 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
        write(1, &c, 1);
}

void    ft_putstr(char *c)
{
        int     i;

        i = 0;
        while (c[i])
        {
                ft_putchar(c[i]);
                i++;
        }
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (i < 1)
		return (0);
	while (i >= 1 && argv[i])
	{
		ft_putstr(argv[i]);
		i--;
	}
	return (0);
}
