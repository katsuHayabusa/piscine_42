/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:23:51 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/12 15:24:03 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	test;

	test = 0;
	i = 0;
	while (test == 0)
	{
		test = 1;
		while (i < size -1)
		{
			if (tab[i] > tab [i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				test = 0;
			}
			i++;
		}
		i = 0;
	}
}
