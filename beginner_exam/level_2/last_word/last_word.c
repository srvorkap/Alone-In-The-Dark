/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 23:00:28 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/05 23:09:27 by srvorkap         ###   ########.fr       */
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
		while (av[1][i] != '\0')
			i++;
		i = i - 1;
		while (av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
			i--;
		while (av[1][i] >= 33 && av[1][i] <= 126)
			i--;
		i = i + 1;
		while (av[1][i] >= 33 && av[1][i] <= 126)
		{
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
