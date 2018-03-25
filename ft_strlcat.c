/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:58:07 by aroi              #+#    #+#             */
/*   Updated: 2018/03/24 18:10:04 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	int		i;
	size_t	j;

	i = -1;
	j = ft_strlen(dst);
	if (dst && src)
	{
		if (size > j)
		{
			while (++i < (int)size - (int)j - 1)
				dst[(int)j + i] = src[i];
			return (ft_strlen(src) + j);
		}
		else
			return (ft_strlen(src) + size);
	}
	return (ft_strlen(src));
}
