/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 10:57:14 by srvorkap          #+#    #+#             */
/*   Updated: 2019/08/01 11:00:47 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 4)
		write(1, "\n", 1);
	else if (av[2][1] != '\0' || av[3][1] != '\0')
		write(1, "\n", 1);
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
