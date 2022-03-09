/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:09:57 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/29 10:46:21 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*rtn;

	i = 0;
	rtn = 0;
	if (min >= max)
	{
		return (NULL);
	}
	rtn = malloc(sizeof(int) * (max - min));
	if (rtn == NULL)
		return (rtn);
	while (min < max)
	{
		rtn[i] = min;
		i++;
		min++;
	}
	return (rtn);
}
