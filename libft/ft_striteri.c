/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:19:24 by wochae            #+#    #+#             */
/*   Updated: 2022/03/23 16:30:06 by wochae           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	i = 0;
	if (s == NULL | f == NULL)
		return;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
