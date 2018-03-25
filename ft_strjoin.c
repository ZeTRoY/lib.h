/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 19:48:32 by aroi              #+#    #+#             */
/*   Updated: 2018/03/24 21:29:34 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*valid_both(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			str[i + j] = s2[j];
			j++;
		}
		str[i + j] = '\0';
		return (str);
	}
	str = 0;
	return (str);
}

static char	*valid_s1(char const *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	str = 0;
	return (str);
}

static char	*valid_s2(char const *s2)
{
	int		j;
	char	*str;

	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s2) + 1));
	if (str)
	{
		while (s2[j])
		{
			str[j] = s2[j];
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	str = 0;
	return (str);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 && s2)
		return (valid_both(s1, s2));
	else if (s1 && s2 == 0)
		return (valid_s1(s1));
	else if (s1 == 0 && s2)
		return (valid_s2(s2));
	return (0);
}
