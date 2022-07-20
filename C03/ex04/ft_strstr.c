/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:08:30 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/20 12:36:47 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == 0)
		return (str);
	j = 0;
	while (str[j])
	{
		if (str[j] == to_find[0])
		{
			i = 0;
			while (str[j + i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == 0)
			{
				return (&str[j]);
			}
		}
		j++;
	}
	return ('\0');
}
