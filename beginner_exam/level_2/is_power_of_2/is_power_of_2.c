/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 16:21:07 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/06 16:28:09 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_power_of_2(unsigned int n)
{
	unsigned int		i;

	i = 1;
	while (i < n)
		i = i * 2;
	if (i == n)
		return (1);
	else
		return (0);
}
