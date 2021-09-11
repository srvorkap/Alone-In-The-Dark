/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 11:11:28 by srvorkap          #+#    #+#             */
/*   Updated: 2019/08/01 11:26:37 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rot_13(char c)
{
	if ((c >= 65 && c <= 77) || (c >= 97 && c <= 109))
		c = c + 13;
	else if ((c >= 78 && c <= 90) || (c >= 110 && c <= 122))
		c = c - 13;
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
			c = rot_13(av[1][i]);
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
