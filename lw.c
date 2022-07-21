#include <unistd.h>
void lw(char  *str)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(str[i])
	{
		if(str[i] <= 32 && str[i + 1] >= 33)
		{
			j = i + 1;	
		}
	i++;
	}
	while(!(str[j] <= 32))
	{
		write(1, &str[j], 1);
		j++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		lw(av[1]);
	}
}
