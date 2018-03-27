/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 10:57:29 by aroi              #+#    #+#             */
/*   Updated: 2018/03/27 15:18:55 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst)
	{
		if (content)
		{
			lst->content = (void *)content;
			lst->content_size = content_size;
		}
		else
		{
			lst->content = NULL;
			lst->content_size = 0;
		}
		lst->next = NULL;
		return (lst);
	}
	return (NULL);
}
