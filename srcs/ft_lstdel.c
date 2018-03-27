/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 11:31:02 by aroi              #+#    #+#             */
/*   Updated: 2018/03/27 15:52:17 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	lst = *alst;
	while (*alst != NULL)
	{
		lst = *alst;
		while (lst->next != NULL)
			lst = lst->next;
		ft_lstdelone(&lst, del);
	}
}
