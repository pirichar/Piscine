/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:50:57 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/29 10:43:39 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_count(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rtn;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	if (size == 0)
	{
		rtn = malloc(sizeof (char) * 1);
		if (rtn == NULL)
			return (NULL);
	}
	rtn = malloc(sizeof(char) * ft_count(size, strs, sep) + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(rtn, strs[i]);
		if (i < size - 1)
			ft_strcat(rtn, sep);
		i++;
	}
	return (rtn);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	count ;
	int	i;

	count = 0;
	i = 0;
	while (i < size)
	{
		count = count + ft_strlen(strs[i]);
		i++;
	}
	count = count + (size - 1) * ft_strlen(sep);
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
