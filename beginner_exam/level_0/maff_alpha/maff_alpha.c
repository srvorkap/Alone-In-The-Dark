/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svorkapi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:30:37 by svorkapi          #+#    #+#             */
/*   Updated: 2019/04/15 20:29:37 by svorkapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	int		i;
	char	odd;
	char	even;

	i = 1;
	odd = 'a';
	even = 'B';
	while (i <= 26)
	{
		if (i % 2 == 1)
		{
			write(1, &odd, 1);
			odd = odd + 2;
		}
		else
		{
			write(1, &even, 1);
			even = even + 2;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
