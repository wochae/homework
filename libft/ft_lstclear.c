/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:44:35 by wochae            #+#    #+#             */
/*   Updated: 2022/03/20 19:12:30 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_del;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		to_del = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(to_del, del);
	}
}
