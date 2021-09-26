/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 03:25:06 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/16 04:59:20 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

int		main(int ac, char **av)
{
	int		i;
	int		first_word_length;

	i = 0;
	first_word_length = 0;
	if (ac < 2)
		write(1, "\n", 1);
	while (av[1][i] != '\0')
	{
		while (ft_isblank(av[1][i]))
			i++;
		if (av[1][i] != '\0' && !ft_isblank(av[1][i]))
		{
			if (first_word_length == 0)
				while (av[1][i] && !ft_isblank(av[1][i]))
				{
					first_word_length++;
					i++;
				}
			else
			{
				while (av[1][i] && !ft_isblank(av[1][i]))
				{
					write(1, &av[1][i], 1);
					i++;
				}
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_isblank(av[1][i]))
		i++;
	while (first_word_length > 0)
	{
		write(1, &av[1][i], 1);
		i++;
		first_word_length--;
	}
	write(1, "\n", 1);
	return (0);
}
