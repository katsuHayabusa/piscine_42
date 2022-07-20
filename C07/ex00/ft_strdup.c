/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:52:32 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/16 13:25:40 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*res;

	i = 0;
	while (src[i])
		i++;
	res = (char *) malloc(sizeof(char) * i);
	i = 0;
	while(src[i])
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}
