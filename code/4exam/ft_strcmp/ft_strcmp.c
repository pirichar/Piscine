#include <stdio.h>

int	ft_strcmp(char *s1, char*s2)
{
	int i;
	
	i = 0;
	while(s1[i] && s1[i] == s2[i])
		i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}


int main(void)
{
	printf("If s1 > s2 = POS , s1 = s2 = 0 , s1 < s2 = NEG\n");
	printf("this is the return of test and test, should give 0 = %d\n",ft_strcmp("test", "test"));
	printf("this is the return of test1 and test2, should give NEG = %d\n",ft_strcmp("test1", "test2"));
	printf("this is the return of test and Test, should give a pos (32) = %d\n", ft_strcmp("test", "Test"));
}

