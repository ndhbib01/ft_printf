/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <<marvin@42.fr>>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:21:56 by hahabib           #+#    #+#             */
/*   Updated: 2026/05/08 14:44:34 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_specifier(char c, va_list *args)
{
	if (c == 'c')
		return (print_char(va_arg(*args, int)));
	if (c == 's')
		return (print_string(va_arg(*args, char *)));
	if (c == 'd' || c == 'i')
		return (print_num(va_arg(*args, int)));
	if (c == 'u')
		return (print_unsigned(va_arg(*args, unsigned int)));
	if (c == 'x')
		return (print_lowerhex(va_arg(*args, unsigned int)));
	if (c == 'X')
		return (print_higherhex(va_arg(*args, unsigned int)));
	if (c == 'p')
		return (print_pointer(va_arg(*args, void *)));
	if (c == '%')
		return (print_percent());
	ft_putchar_fd('%', 1);
	ft_putchar_fd(c, 1);
	return (2);
}
