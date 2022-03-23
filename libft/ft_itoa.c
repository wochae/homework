/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:54:59 by wochae            #+#    #+#             */
/*   Updated: 2022/03/23 21:49:13 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_memlen(int	n)
{
	long long	num;
	int			len;

	num = n;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		num *= (-1);
	}
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	size_t		i;
	long long	num;

	num = n;
	len = ft_memlen(n);
	i = len;
	str = ft_calloc(sizeof(char), len + i);
	if (str == NULL)
		return (NULL);
	if (num < 0)
		num *= (-1);
	while (i)
	{
		str[i - 1] = (num % 10 + 48);
		num /= 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
