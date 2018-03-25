/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 17:05:03 by aroi              #+#    #+#             */
/*   Updated: 2018/03/24 18:08:58 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (s)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
		str = (char *)s;
		str[ft_strlen((char *)s)] = '\0';
		while (*(str + i))
		{
			*(str + i) = f(*(str + i));
			i++;
		}
		return (str);
	}
	return (NULL);
}
