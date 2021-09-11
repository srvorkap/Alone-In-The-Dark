/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 20:34:02 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/05 20:45:57 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(dst = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	else
	{
		while (i >= 0)
		{
			dst[i] = src[i];
			i--;
		}
		return (dst);
	}
}
