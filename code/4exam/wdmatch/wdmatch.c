#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 3)
	{
		ft_putchar('\n');
		return (1);
	}
	while(argv[1][i] && argv[2][j])
	{
		if(argv[1][i] == argv[2][j])
			i++;
		if(argv[1][i] != argv[2][j])
			j++;
	}
//	printf("This is i after the while %d\n", i);
	if(argv[1][i]  == '\0')
	{
		i = 0;
		while(argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

