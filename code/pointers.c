#include <stdio.h>



int main(void)
{
	int a;
	int *str;

	a = 100;
	str = &a;


	printf("this is & of a %p\n", &a);
	printf("this is printing only str as a pointer %p\n", str);
	printf("this is the & of str %p\n", &str);
	printf("this is the * of str %d\n", *str); 
}
