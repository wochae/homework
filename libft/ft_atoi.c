/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:16:33 by wochae            #+#    #+#             */
/*   Updated: 2022/03/23 21:13:57 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	minus;
	int	dec;

	dec = 0;
	minus = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	if (*str == '-' || *str == '+')
		return (0);
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			dec = dec * 10 + *str - '0';
		else
			break ;
		str++;
	}
	return (dec * minus);
}
