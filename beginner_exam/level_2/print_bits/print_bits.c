/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 00:54:16 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/15 00:59:07 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	unsigned char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}
