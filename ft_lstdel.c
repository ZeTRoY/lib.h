/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 11:31:02 by aroi              #+#    #+#             */
/*   Updated: 2018/03/25 11:40:17 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	if (*alst && (*alst)->content)
	{
		lst = *alst;
		while (*alst != NULL)
		{
			lst = *alst;
			while (lst->next != NULL)
				lst = lst->next;
			ft_lstdelone(&lst, del);
		}
	}
}
