/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 19:41:26 by aroi              #+#    #+#             */
/*   Updated: 2018/03/23 14:25:39 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*new_dst;
	char	*new_src;

	i = 0;
	new_dst = (char *)dst;
	new_src = (char *)src;
	if (dst && src)
	{
		while (len-- > 0 && new_src[i] && new_dst[i])
		{
			new_dst[i] = new_src[i];
			i++;
		}
		while ((int)len-- >= 0)
		{
			new_dst[i] = new_src[i];
			i++;
		}
		if (new_src[i] == '\0' && (int)len >= 0)
			new_dst[i] = '\0';
		if (len == 0)
			return (dst);
	}
	return (dst);
}
