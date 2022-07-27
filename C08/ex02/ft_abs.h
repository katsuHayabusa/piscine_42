/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:19:27 by saichaou          #+#    #+#             */
/*   Updated: 2022/07/27 14:28:43 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define int VALUE
# define VALUE Value
# if Value >= 0
# define ABS(Value) Value
# endif
#else
# define ABS(Value) (Value * 1)
#endif
