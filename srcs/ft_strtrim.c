/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 20:38:13 by aroi              #+#    #+#             */
/*   Updated: 2018/03/27 19:57:23 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*gr_eq_zero(char const *s, int i, int j)
{
	int		k;
	char	*str;

	k = 0;
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str)
	{
		while (i <= j)
			str[k++] = s[i++];
		str[k] = '\0';
		return (str);
	}
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s) - 1;
	if (s)
	{
		while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
			i++;
		while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j > 0)
			j--;
		if (j - i >= 0)
			return (gr_eq_zero(s, i, j));
		else
		{
			str = (char *)malloc(sizeof(char));
			if (str)
			{
				str[0] = '\0';
				return (str);
			}
		}
	}
	return (0);
}
