/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wochae <wochae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:35:08 by wochae            #+#    #+#             */
/*   Updated: 2022/05/10 04:12:03 by wochae           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list ap;
	int cnt;

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
