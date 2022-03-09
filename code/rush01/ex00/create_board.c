void	create_board(int array[4][4]);

// create_board populates the passed array with 0s
void	create_board(int array[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			array[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
