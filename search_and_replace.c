/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:57:33 by abeaudui          #+#    #+#             */
/*   Updated: 2022/07/21 10:19:08 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac == 4)
		while(av[1][i])
		{	
			if(av[1][i] == av[2][0])
			{
				 av[1][i] = av[3][0];
				 write(1, &av[1][i], 1);
			}
			else 
				write(1, &av[1][i], 1);
		i++;
		}
	else 
		write(1, "\n", 1);
}
