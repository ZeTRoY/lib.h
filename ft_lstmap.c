/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 11:54:27 by aroi              #+#    #+#             */
/*   Updated: 2018/03/28 16:17:19 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*new_first;
	t_list	*tmplst;

	if (lst == 0 || f == 0)
		return (0);
	new = ft_lstnew(lst->content, lst->content_size);
	if (new == 0)
		return (0);
	new = f(new);
	new_first = new;
	lst = lst->next;
	while (lst)
	{
		tmplst = ft_lstnew(lst->content, lst->content_size);
		if (tmplst == 0)
			return (0);
		tmplst = f(tmplst);
		lst = lst->next;
		new_first->next = tmplst;
		new_first = new_first->next;
	}
	return (new);
}
