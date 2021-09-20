/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 01:17:53 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/14 01:30:45 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ac != 3)
		write(1, "\n", 1);
	else if (av[1][0] == '\0')
		write(1, "1\n", 2);
	else
	{
		while (av[2][j] != '\0')
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
	}
	return (0);
}