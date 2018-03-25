/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:59:26 by aroi              #+#    #+#             */
/*   Updated: 2018/03/23 12:03:14 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s)
	{
		while (*(unsigned char *)s != (unsigned char)c && n-- > 1)
			s++;
		if (*(unsigned char *)s == (unsigned char)c && n > 0)
			return ((void *)s);
	}
	return (0);
}
