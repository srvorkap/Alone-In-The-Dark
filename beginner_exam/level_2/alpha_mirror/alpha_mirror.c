/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 23:43:30 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/05 23:58:02 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	mirror(char c)
{
	if (c >= 65 && c <= 90)
		c = 90 - c + 65;
	if (c >= 97 && c <= 122)
		c = 122 - c + 97;
	return (c);
}

int		main(int ac, char **av)
{
	int		i;
	char	c;

	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		while (av[1][i] != '\0')
		{
			c = mirror(av[1][i]);
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
