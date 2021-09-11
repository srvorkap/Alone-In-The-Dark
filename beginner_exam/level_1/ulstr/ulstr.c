/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svorkapi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:08:11 by svorkapi          #+#    #+#             */
/*   Updated: 2019/04/16 22:31:34 by svorkapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	new;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				new = argv[1][i] + 32;
				write(1, &new, 1);
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				new = argv[1][i] -32;
				write(1, &new, 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
