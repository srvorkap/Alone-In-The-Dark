9/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:02:49 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/13 22:53:33 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		while (av[1][i] == ' ' || av[1][i] == '\n' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] != ' ' && av[1][i] != '\n' && av[1][i])
				write(1, &av[1][i], 1);
			else if ((av[1][i] == ' ' || av[1][i] == '\n' || av[1][i] == '\t') \
				&& av[1][i + 1] != ' ' && av[1][i + 1] != '\n' && av[1][i + 1] != '\t' && av[1][i + 1] != '\0')
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
