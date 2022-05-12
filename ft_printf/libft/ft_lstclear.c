/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:44:35 by wochae            #+#    #+#             */
/*   Updated: 2022/05/10 17:32:22 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_del;

	if (lst == NULL || del == NULL)
		return ;
	{
		while (*lst)
		{
			to_del = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = to_del;
		}
	}
}
