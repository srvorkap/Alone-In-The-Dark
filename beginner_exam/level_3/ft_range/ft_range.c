/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 05:47:13 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/14 06:15:40 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*range;
	int		i;
	int		array_size;

	i = 0;
	if (start > end)
		array_size = start - end + 1;
	else
		array_size = end - start + 1;
	if (!(range = (int *)malloc(sizeof(int) * array_size)))
		return (NULL);
	else
	{
		if (start > end)
		{
			while (start >= end)
			{
				range[i] = start;
				i++;
				start--;
			}
		}
		else
		{
			while (end >= start)
			{
				range[i] = start;
				i++;
				start++;
			}
		}
		return (range);
	}
}
