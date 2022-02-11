/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:24:28 by mea               #+#    #+#             */
/*   Updated: 2021/10/22 15:55:49 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c <= 'z') && (c >= 'a')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}