/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 23:44:17 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/11 23:49:27 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	int		i;
	char	odd;
	char	even;

	i = 0;
	odd = 'z';
	even = 'Y';
	while (i < 13)
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		odd = odd - 2;
		even = even - 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
