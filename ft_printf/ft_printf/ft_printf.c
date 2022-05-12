/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:09:21 by wochae            #+#    #+#             */
/*   Updated: 2022/05/10 20:09:21 by wochae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		cnt;

	va_start(ap, format);
	cnt = 0;
	while (*format)
	{
		if (*format != '%')
		{
			cnt = cnt + ft_putchr_cnt(*format);
		}
		else if (*(format + 1) && ft_strchr(ALLTYPES, *(format + 1)))
		{
			cnt = cnt + putarg_cnt(&ap, *(format + 1));
			format++;
		}
		format++;
	}
	va_end(ap);
	return (cnt);
}
