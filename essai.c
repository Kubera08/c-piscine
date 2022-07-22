int ft_atoi(char *str)
{	
	int i;
	int res;
	int signe;
	int boite;
	i = 0;
	res = 0;
	signe = 1;
	boite = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i])
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		boite++;
		if(str[i] == '-')
			signe = signe * -1;
		if(boite == 2)
			return (0);
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res  * 10 + str[i] - '0';
		i++;
	}
	return(res * signe);
}

#include<stdio.h>
int main(int ac, char **av)
{
	ac = ac;
	printf("%d\n", ft_atoi(av[1]));
	return 0;
}
