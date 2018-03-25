/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:31:20 by aroi              #+#    #+#             */
/*   Updated: 2018/03/24 18:09:35 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = -1;
	if (s1)
	{
		str = (char *)malloc(sizeof(char) * ft_strlen(s1));
		while (++i < (int)ft_strlen(s1))
			str[i] = s1[i];
		str[i] = '\0';
		return (str);
	}
	str = 0;
	return (str);
}
