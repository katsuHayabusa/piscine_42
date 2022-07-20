/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:12:16 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/20 16:30:05 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && i < size - 1)
	{
		dest[i] = *src;
		*src ++;
	}
	dest[i] = '\0';
	return (i + 1);
}
