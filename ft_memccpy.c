/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:05:52 by aroi              #+#    #+#             */
/*   Updated: 2018/03/24 14:07:17 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *new_dst;
	unsigned char *new_src;

	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	if (new_dst && new_src)
	{
		while ((int)n > 0)
		{
			*new_dst++ = *new_src++;
			if (*(new_src - 1) == (unsigned char)c)
				return ((void *)new_dst);
			if ((int)n-- > 1 && *(new_src - 1) == '\0')
				return ((void *)src);
		}
		return ((void *)0);
	}
	return (dst);
}
