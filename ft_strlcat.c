/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:58:07 by aroi              #+#    #+#             */
/*   Updated: 2018/03/27 17:35:29 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
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
			dst[(int)j + i] = '\0';
			return (ft_strlen(src) + j);
		}
		else
			return (ft_strlen(src) + size);
	}
	return (ft_strlen(src));
}
