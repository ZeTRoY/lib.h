/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 19:41:26 by aroi              #+#    #+#             */
/*   Updated: 2018/03/27 16:03:35 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;

	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	if (new_dst >= new_src)
		while ((int)--len >= 0)
			new_dst[len] = new_src[len];
	else
	{
		while ((int)len-- > 0)
			*new_dst++ = *new_src++;
	}
	return (dst);
}
