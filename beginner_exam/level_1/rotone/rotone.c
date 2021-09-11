/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svorkapi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:41:10 by svorkapi          #+#    #+#             */
/*   Updated: 2019/04/17 17:03:37 by svorkapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	x;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] < 90)
			{
				x = argv[1][i] + 1;
				write(1, &x, 1);
			}
			else if (argv[1][i] == 90)
				write(1, "A", 1);
			else if (argv[1][i] >=97 && argv[1][i] < 122)
			{
				x = argv[1][i] + 1;
				write(1, &x, 1);
			}
			else if (argv[1][i] == 122)
				write(1, "a", 1);
			else
				write(1, &argv[1][i], 1);
		i++;
		}
		write(1, "\n", 1);
	}
}
