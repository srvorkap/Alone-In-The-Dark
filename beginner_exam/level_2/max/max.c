/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 00:24:59 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/06 00:36:36 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	unsigned int		i;
	int		max;

	i = 0;
	if (len == 0)
		return (0);
	else
	{
		max = tab[0];
		while (i < len)
		{
			if (tab[i] >= max)
				max = tab[i];
			i++;
		}
		return (max);
	}
}
