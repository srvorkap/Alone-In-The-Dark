/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:34:19 by srvorkap          #+#    #+#             */
/*   Updated: 2019/08/01 17:36:52 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	unsigned char	reverse;

	i = 7;
	reverse = 0;
	while (i >= 0)
	{
		reverse = (reverse << 1) | (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return (reverse);
}
