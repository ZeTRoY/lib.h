/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:50:41 by aroi              #+#    #+#             */
/*   Updated: 2018/03/26 19:14:19 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	size_t		i;
	long int	n;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit((int)str[i]) == 1 && n >= 0)
		n = n * 10 + (int)str[i++] - '0';
	if (n < 0 && sign < 0)
		return (0);
	if (n < 0 && sign > 0)
		return (-1);
	return (sign * n);
}
