/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:04:40 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/29 12:27:07 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if ((i * i) == nb)
		return ((int)i);
	else
		return (0);
}
