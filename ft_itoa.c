/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 09:06:56 by aroi              #+#    #+#             */
/*   Updated: 2018/03/25 09:59:27 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	qnt_counter(int n)
{
	size_t qnt;

	qnt = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		qnt++;
	}
	return (qnt);
}

static char		*givestr(char *str, size_t i, int n)
{
	int		j;
	int		nbr[qnt_counter(n)];

	j = 0;
	while (n > 0)
	{
		nbr[j++] = n % 10;
		n /= 10;
	}
	while (j >= 0)
		str[i++] = (char)nbr[--j] + 48;
	return (str);
}

static char		*positive_nbr(int n)
{
	size_t	qnt;
	char	*str;

	qnt = qnt_counter(n);
	str = (char *)malloc(sizeof(char) * (qnt + 1));
	if (str)
	{
		str = givestr(str, 0, n);
		str[qnt] = '\0';
		return (str);
	}
	return (0);
}

static char		*negative_nbr(int n)
{
	size_t	qnt;
	char	*str;

	if (n == -2147483648)
		return ("-2147483648");
	qnt = qnt_counter(n);
	n *= -1;
	str = (char *)malloc(sizeof(char) * (qnt + 2));
	if (str)
	{
		str[0] = '-';
		str = givestr(str, 1, n);
		str[qnt + 1] = '\0';
		return (str);
	}
	return (0);
}

char			*ft_itoa(int n)
{
	if (n < 0)
		return (negative_nbr(n));
	else if (n == 0)
		return ("0");
	else
		return (positive_nbr(n));
}
