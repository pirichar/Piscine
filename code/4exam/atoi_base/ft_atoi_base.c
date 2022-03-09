#include <stdio.h>
#include <unistd.h>

int ft_basecount(char *base);
int ft_is_in_base(char c, char *base);
int	ft_check_base(char *base, int baseLength);
int	ft_atoi_base(const char *str, char *base)
{
//	int i;
	int n;
	int rtn;
	int baseLength;

//	i = 0;
	baseLength = ft_basecount(base);
	n = 1;
	rtn = 0;
	if(!ft_check_base(base, baseLength))
		return (0);
	if(*str == '-')
	{
		n =  -1;
		str++;
	}
	while(ft_is_in_base(*str, base) >= 0) 
	{
		rtn = rtn * baseLength + ft_is_in_base(*str, base); 
		str++;
	}
	return ( rtn * n );
}

int	ft_basecount(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int ft_check_base(char *base, int baseLength)
{
	int i;
	int j;

	i = 0;
	if (baseLength < 2 || baseLength > 16)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return(1);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("This is the return of ATOI_BASE = %d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}	

			

	



		
