/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:18:45 by wochae            #+#    #+#             */
/*   Updated: 2022/03/23 21:13:59 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t n)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(cnt * n);
	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < cnt * n)
	{
		*(unsigned char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
