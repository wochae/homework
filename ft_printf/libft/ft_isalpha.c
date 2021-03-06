/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:08:18 by wochae            #+#    #+#             */
/*   Updated: 2022/05/12 14:40:51 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (97 <= c && c <= 122)
	{
		return (1);
	}
	else if (65 <= c && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
