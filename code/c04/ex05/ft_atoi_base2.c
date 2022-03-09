#include <stdio.h>
int     check_base(char *base);
int     ft_strlen(char *str);
int     check_string(char *str, char *base);

int     ft_atoi_base(char *str, char *base)
{
        int i;
        int neg;
        int res;
        int baseCount;

        i = 0;
        res = 0;
        neg = 1;
        baseCount = ft_strlen(base);
      // if((check_base(base) == 0) && (check_string(str,base) ==0))
       //		{
                while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
                        i++;
                while(str[i] == '+' || str[i] == '-')
                {
                        if(str[i] == '-')
                                neg = neg * -1;
                        i++;
                }
                while(str[i])// && (str[i] >= base[0] && str[i] <=base[baseCount])) 
				{
                        res = res * baseCount + i ;// here might be the first problem 
						i++;
                }
      //  }
        return (res * neg);
}
/* this is to check if my str got character included in my base*/
int     check_string(char *str, char *base)
{
        int i;
        int j;

        i = 0;
//      j = 0 ;
		while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while(str[i] == '+' || str[i] == '-')
		{
			i++;
		}	
        while(str[i]) //I am pretty much sure this is the problem here
        {
                j = 0;
                while(base[j] && str[i] != base[j])
                        j++;
                if (base[j] == '\0')
                        return (1);
                i++;
        }
        return (0);
}

/*this is to check my base*/
int     check_base(char *base)
{
        int i;
        int j;

        i = 0;
        j = i + 1;
        if(base[0] == 0 || base[1] == 0)
                return (1);
        while(base[i])
        {
                if(base[i] == '-' || base[i] == '+' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
                        return(1);
                if (base[i] == base[j])
                {
                        return (1); 
                        j++;
                }
                i++;
        }
        return (0);
}


int     ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i])
                i++;
        return (i);
}

int	main(void)

{

	char *str1 = "0123456789";

	char *str2 = "poneyvif";

	char *str3 = "0123456789abcdef";

	char *str4 = "0123456789abcdef";

	char *str5 = " +--+0";

	printf("str = '%s'\nbase = '%s'\nYour function returns: %d\n\n", str5, str1, ft_atoi_base(str5, str1));

	char *str6 = "oevf";

	printf("str = '%s'\nbase = '%s'\nYour function returns: %d\n\n", str6, str2, ft_atoi_base(str6, str2));

	char *str7 = "abeef";

	printf("str = '%s'\nbase = '%s'\nYour function returns: %d\n\n", str7, str3, ft_atoi_base(str7, str3));

	char *str8 = "ab908";

	printf("str = '%s'\nbase = '%s'\nYour function returns: %d\n\n", str8, str4, ft_atoi_base(str8, str4));

	printf("str = '%s'\nbase = '%s'\nYour function returns: %d\n\n", str6, str4, ft_atoi_base(str6, str4));

}
