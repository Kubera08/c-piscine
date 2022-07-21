/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:13:03 by abeaudui          #+#    #+#             */
/*   Updated: 2022/07/21 18:51:22 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char	deja_vu(char *str, char c, int place)
{
	int 	i;

	i = 0;
	while (i < place)
	{	
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
	        
}

int	inter(char *str, char *str2)
{
	int 	i;
	int	j;

	i = 0;
		while(str[i])
		{
			j = 0;
			while(str2[j])
			{
				if(str[i] == str2[j])
				{	
					if (deja_vu(str, str[i], i) == 1)
					{
						write(1, &str[i], 1);
						break;
					}
				}
			j++;	
			}
		i++;
		} 
		write(1, "\n", 1);

}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}

}
