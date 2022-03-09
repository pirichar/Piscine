#include <stdio.h>

 int	ft_atoi(char *str)
{
	int	i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i])
	{		
		if (str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				neg = neg * -1;
		}
		if(str[i] >= '0' && str[i] <= '9') 
			{
				res = res * 10 + (str[i] - '0');
				if (str[i + 1] < '0' || str[i + 1] > '9')
					return (res * neg);
			}	
		i++;
	}
	return (res * neg);
}


/*int main(void)
{
	char str[100] = "1234ab567";
	printf("This is the result of atoi of   ---+--+1234ab567/ : %i\n ", ft_atoi(str));
}*/

#include <stdlib.h>
int main(void)
{
        char *s = " ---+--+1234ab567";
		char *s2 = " ---+--+1234ab567";

        printf("THis is my ft_atoi : %d\nThis is the std atoi :  %d", ft_atoi(s), atoi(s2));
        return (0);
}
