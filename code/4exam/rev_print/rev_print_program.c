/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_program.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 08:21:46 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/30 08:47:12 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int 	ft_strlen(char *str);
void	ft_putchar(char c);
int main(int argc, char **argv)
{
//	int i;
	int j;

//	i = 0;
//	if (argc == 1)
//		return (1);
//	j = ft_strlen(argv[1]) - 1;
	if (argc == 2)
	{
	j = ft_strlen(argv[1]) - 1;
		while (j >= 0)
		{
			ft_putchar(argv[1][j]);
			j--;
		}
	}
	ft_putchar('\n');
	return (0);
}



int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


