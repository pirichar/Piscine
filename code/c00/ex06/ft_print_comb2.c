/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:13:10 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/13 12:06:53 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	display(int nb)	
{
	int	first;
	int	second;

	if (nb > 9)
	{
		first = nb / 10;
		second = nb % 10;
		ft_putchar(first + 48);
		ft_putchar(second + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	firstnum;
	int	secondnum;

	firstnum = 0;
	while (firstnum <= 99)
	{
		secondnum = firstnum + 1;
		while (secondnum <= 99)
		{
			display(firstnum);
			ft_putchar(' ');
			display(secondnum);
			if (firstnum < 98 || secondnum < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++secondnum;
		}
		++firstnum;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
