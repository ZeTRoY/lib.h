/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 11:54:27 by aroi              #+#    #+#             */
/*   Updated: 2018/03/27 15:36:14 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lst_free(t_list **lst)
{
	t_list *new;

	new = (*lst)->next;
	free(*lst);
	*lst = new;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *new_iter;

	if (lst && lst->content)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (new)
		{
			new_iter = new;
			while (lst)
			{
				new_iter = (t_list *)malloc(sizeof(t_list));
				if (new_iter)
				{
					new_iter = f(lst);
					new_iter->next = NULL;
					lst_free(&lst);
					new_iter = new_iter->next;
				}
			}
			return (new);
		}
	}
	return (NULL);
}
