/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarriss <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:04:07 by tgarriss          #+#    #+#             */
/*   Updated: 2021/07/17 14:13:49 by tgarriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_array(int array[4][4]);

// write_array takes a 4x4 array as an argument
// it loops through it, and prints as it goes along
void	write_array(int array[4][4])
{
	int		x;
	int		y;
	char	value;

	x = 0;
	y = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			value = array[y][x] + 48;
			write(1, &value, 1);
			if (x < 3)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
		x = 0;
	}
}
