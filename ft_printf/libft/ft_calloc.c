/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:18:45 by wochae            #+#    #+#             */
/*   Updated: 2022/05/10 17:24:23 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t n)
{
	void	*ptr;

	ptr = malloc(cnt * n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, cnt * n);
	return (ptr);
}
