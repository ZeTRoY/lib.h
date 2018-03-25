/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:23:11 by aroi              #+#    #+#             */
/*   Updated: 2018/03/24 18:10:19 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1);
	if (s1)
	{
		if (s2)
		{
			while (s2[i] && i < (int)n)
			{
				s1[i + j] = s2[i];
				i++;
			}
			s1[i + j] = '\0';
		}
	}
	return (s1);
}
