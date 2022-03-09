#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
int main(int argc, char **argv)
{
	int i;
//	int j;
	int array[128] = {0};

	i = 0;
//	j = 0;
	if (argc == 3)
	{
		while(argv[2][i])
		{
			if (array[(int)argv[2][i]] == 0)
				array[(int)argv[2][i]] = 1;
			i++;
		}
		i = 0;
		while(argv[1][i])
		{
			if (array[(int)argv[1][i]] == 1)
			{
				ft_putchar(argv[1][i]);
				array[(int)argv[1][i]] = 2;
			}
			i++;
		}
	}
}

void	ft_putchar(char c)
{
	write(1,&c,1);
}
