/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:57:56 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/30 07:38:54 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	neg;

	i = 0;
	sum = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] =='-')
	{
		if (str[i] =='-')
			neg = neg * -1;
		i++;
	}
	while (str[i] && str[i] >='0' && str[i] <='9')
	{
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return (neg * sum);
}
