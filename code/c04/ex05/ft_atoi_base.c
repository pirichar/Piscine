#include <stdio.h>

int	ft_strlen(char *);
int	ft_check_base(char *base);
int	ft_atoi_base(char *str, char *base)
{
	int i;
	int neg;
	int res;
	int baseCount;

	i = 0;
	neg = 1;
	res = 0;
	baseCount = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			neg = neg * -1;
		i++;
	}
/*	while(str[i] >= '0' && str[i] <= '9') // Mon while devrait être est-ce que je fais partie du base et non est-ce que je fais parti de 0 a 9
	{
		if(ft_check_base(base) == 1)
		{
			res = res * 10 + (base[str[i] - 48] / baseCount); // ici il faut que je prenne en compte si j'ai 2 ou 1 chiffre donc 10 ou 100
		}
		i++;
	}*/
	return (res * neg);
}

int	ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while(base[i])
	{
		j = i + 1;
		if(base[0] == 0 || base[1] == 0)
			return (0);
		while(base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if(base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(void)
{
	printf("This is the result of   ---+--+1234ab567 %d\n", ft_atoi_base(" ---+--+1234ab567", "0123456789"));
}
