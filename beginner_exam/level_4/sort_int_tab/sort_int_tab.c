/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 04:21:52 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/19 04:55:31 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	int				temp;
	unsigned int	i;
	int				swapped;

	i = 0;
	swapped = 1;
	while (swapped == 1)
	{
		swapped = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = *(&tab[i]);
				*(&tab[i]) = *(&tab[i + 1]);
				*(&tab[i + 1]) = temp;
				swapped = 1;
			}
			i++;
		}
		i = 0;
	}
}
