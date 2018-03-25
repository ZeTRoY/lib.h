/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 14:45:40 by aroi              #+#    #+#             */
/*   Updated: 2018/03/24 15:22:55 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*memarea;
	int		i;

	i = 0;
	memarea = malloc(size);
	if (memarea)
	{
		while (i < (int)size && (int)size >= 0)
			memarea[i++] = 0;
		return ((void *)memarea);
	}
	return ((void *)0);
}
