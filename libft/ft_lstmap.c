/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:31:35 by wochae            #+#    #+#             */
/*   Updated: 2022/03/23 16:21:08 by wochae           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list head;
	t_list *newlst;
	t_list *curr;

	if (!lst || !f)
		return (NULL);
	curr = ft_lstnew((f)(lst->content));
	head.next = curr;
	if (!curr)
		ft_lstclear(&head.next, del);
	lst = lst->next;
	while (lst)
	{
		newlst = ft_lstnew((f)(lst->content));
		if (!newlst)
			ft_lstclear(&head.next, del);
		curr->next = newlst;
		curr = curr->next;
		lst = lst->next;
	}
	return (head.next);
}
