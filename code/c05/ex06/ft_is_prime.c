/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:05:25 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/27 11:21:57 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* The basic principle of this one is just
 * while the remaining of the divison by a number equal not 0
 * get the i to get bigger and bigger
 * if the remaining number equal the number its a prime number
 * else its not*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (nb % i != 0)
	{
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}
