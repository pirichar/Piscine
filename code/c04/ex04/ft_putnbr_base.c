/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:42:43 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/26 17:00:48 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
int		ft_checkbase(char *base);
void	ft_putnbr_base(int nbr, char *base);

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baseCount;
	long	n;

	n = nbr;
	baseCount = ft_strlen(base);
	if (ft_checkbase(base) == 0)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= baseCount)
		{
			ft_putnbr_base(n / baseCount, base);
			ft_putnbr_base(n % baseCount, base);
		}
		else
			ft_putchar(base[n]);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
