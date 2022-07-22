/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   watch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:40:18 by abeaudui          #+#    #+#             */
/*   Updated: 2022/07/22 13:11:52 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i] ,1);
        i++;
    }
}
int main(int ac, char **av)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	a = 0;

	if ( ac == 3)
		while(av[1][i])
		{
			while(av[2][j])
			{	
				if(av[1][i] == av[2][j])
				{
					a++;
					break;
				}
			j++;
			}
		i++;
		}
	if (a == ft_strlen(av[1]))
		ft_putstr(av[1]);
	else	
		write(1, "\n", 1);
}
