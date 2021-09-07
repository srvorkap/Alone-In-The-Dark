/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svorkapi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:56:25 by svorkapi          #+#    #+#             */
/*   Updated: 2019/04/16 20:06:24 by svorkapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		repeat;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{	
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				repeat = argv[1][i] - 65 + 1;
				while (repeat > 0)
				{
					write(1, &argv[1][i], 1);
					repeat--;
				}
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				repeat = argv[1][i] - 97 + 1;
				while (repeat > 0)
				{
					write(1, &argv[1][i], 1);
					repeat--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
