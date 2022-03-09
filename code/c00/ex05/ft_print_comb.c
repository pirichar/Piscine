/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:34:57 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/14 10:13:40 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0' - 1;
	while (++first <= '7')
	{
		second = first;
		while (++second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (first != '7' || second != '8' || third != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				third ++;
			}	
		}				
	}	
}
