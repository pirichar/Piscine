#include <stdio.h>

void	ft_initarray(char **argv, int array[8][2]);

int	main(int argc, char **argv)
{
	int	array[8][2];

	(void)argc;
	ft_initarray(argv, array);
	printf("this is array[0][0] = %d\n", array[0][0]);
	printf("this is array[0][1] = %d\n", array[0][1]);
	printf("this is array[1][0] = %d\n", array[1][0]);
	printf("this is array[1][0] = %d\n", array[1][1]);
}	
/* array 0 = row1
 * array 1 = row 2
 * array 2 = row 3
 * array 3 = row 4
 * array 4 = col 1
 * array 5 = col 2
 * array 6 = col 3
 * array 7 = col 4*/

void	ft_initarray(char **argv, int array[8][2])
{
	array[0][0] = argv[1][16] - 48;
	array[0][1] = argv[1][24] - 48;
	array[1][0] = argv[1][18] - 48;
	array[1][1] = argv[1][26] - 48;
	array[2][0] = argv[1][20] - 48;
	array[2][1] = argv[1][28] - 48;
	array[3][0] = argv[1][22] - 48;
	array[3][1] = argv[1][30] - 48;
	array[4][0] = argv[1][0] - 48;
	array[4][1] = argv[1][8] - 48;
	array[5][0] = argv[1][2] - 48;
	array[5][1] = argv[1][10] - 48;
	array[6][0] = argv[1][4] - 48;
	array[6][1] = argv[1][12] - 48;
	array[7][0] = argv[1][6] - 48;
	array[7][1] = argv[1][14] - 48;
}
