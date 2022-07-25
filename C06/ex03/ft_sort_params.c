/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:53:25 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/25 16:44:27 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	**sort_params(char **params)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (params[i])
	{
		j = i + 1;
		while (params[j])
		{
			if (ft_strcmp(params[i], params[j]) > 0)
			{
				temp = params[i];
				params[i] = params[j];
				params[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	(void) argc;
	i = 1;
	if (!argv[i])
		return ('\0');
	sort_params(argv);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
