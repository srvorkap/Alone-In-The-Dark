/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 20:25:17 by srvorkap          #+#    #+#             */
/*   Updated: 2019/08/01 20:30:03 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		i;
	int		len;
	int		*rrange;

	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	if (!(rrange = (int *)malloc(sizeof(int) *len)))
		return (NULL);
	else
	{
		i = 0;
		while (start != end)
		{
			rrange[i++] = end;
			end -= (start > end) ? -1 : 1;
		}
		rrange[i] = end;
		return (end);
	}
}
