#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


int main(void)
{
	int a = 10;
	int b = 5;

	printf("this is my ints before\n a = %d\n b = %d\n", a, b);
	ft_swap(&a,&b);
	printf("this is my ints after\n a = %d\n b = %d\n", a, b);
}


