/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:48:46 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/18 14:49:17 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	cap = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')) && (cap == 1))
		{
			str[i] = str[i] - 32;
			cap = 0;
		}
		else if (((str[i] >= '0') && (str[i] <= '9')) && (cap == 1))
			cap = 0;
		else if ((str[i] < 'a' || (str[i] > 'z'))
			&& ((str[i] < '0' || str[i] > '9')))
			cap = 1;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}
