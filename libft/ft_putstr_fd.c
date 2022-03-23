/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:30:31 by wochae            #+#    #+#             */
/*   Updated: 2022/03/23 14:31:49 by wochae           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	size_t i;

	i = 0;
	if (s == NULL)
		return;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
