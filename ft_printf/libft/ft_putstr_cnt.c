/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_cnt.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:48:12 by wochae            #+#    #+#             */
/*   Updated: 2022/05/12 14:48:24 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_cnt(char *str)
{
	int	cnt;

	cnt = 0;
	if (str == NULL)
	{
		cnt = write(1, "(null)", 6);
		return (cnt);
	}
	while (*str)
	{
		cnt = cnt + write(1, str, 1);
		str++;
	}
	return (cnt);
}
