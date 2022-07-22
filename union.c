/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:50:51 by abeaudui          #+#    #+#             */
/*   Updated: 2022/07/22 14:15:58 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	deja_vu(char *str, char c, int place)
{
	int	i;

	i = 0;
	while(i < place)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int deja(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int	ft_union(char *str, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if(deja_vu(str, str[i], i) == 1)
		{	
			write(1, &str[i], 1);
		}
	i++;
	}
	  while(str2[j])
        {
		if (deja(str,str2[j]) == 1)
		{	
                	if(deja_vu(str2, str2[j], j) == 1)
                	{
                        	write(1, &str2[j], 1);
                	}
		}
        j++;
        }
}

int	main(int ac, char **av)
{
	ft_union(av[1], av[2]);
	write(1, "\n", 1);

}
