
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:25:40 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/20 21:57:31 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, t_point size, t_point begin, char to_fill)
{
	if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y || tab[begin.x][begin.y] != to_fill)
		 ;
	tab[begin.x][begin.y] = 'F';
	fill(tab, size, (t_point){begin.x + 1, begin.y}, to_fill);
	fill(tab, size, (t_point){begin.x - 1, begin.y}, to_fill);
	fill(tab, size, (t_point){begin.x, begin.y + 1}, to_fill);
	fill(tab, size, (t_point){begin.x, begin.y - 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.x][begin.y]);
}
