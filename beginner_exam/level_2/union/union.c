/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 23:12:18 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/05 23:41:25 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_first(char *str, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		is_not_in_string(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		while (av[1][i] != '\0')
		{
			if (is_first(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (is_first(av[2], av[2][i], i) && is_not_in_string(av[1], av[2][i]))
				write(1, &av[2][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
