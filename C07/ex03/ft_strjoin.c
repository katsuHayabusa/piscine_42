/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:53:53 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/25 15:16:58 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	final_size(int size, char **strs)
{
	int	i;
	int	j;
	int	final_count;

	i = 0;
	final_count = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			final_count++;
			j++;
		}
		i++;
	}
	return (final_count);
}

char    *ft_strcat(char *dest, char *src)
{
        int     i;
        int     j;

        i = 0;
        j = 0;
        while (dest[i])
        {
                i++;
        }
        while (src[j])
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int	i;

	res = malloc(sizeof(char) * final_size(size, strs));
	i = 0;
	while (i < size)
	{
		if (i >= 1)
			res = ft_strcat(res, sep);
		res = ft_strcat(res, strs[i]);
		i++;
	}
	return (res);
}
