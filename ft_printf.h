/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <<marvin@42.fr>>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:50:56 by hahabib           #+#    #+#             */
/*   Updated: 2026/04/16 15:54:57 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_handle_specifier(char c, va_list *args);

int		print_char(int c);
int		print_string(char *s);
int		print_num(int n);
int		print_unsigned(unsigned int n);
int		print_lowerhex(unsigned int n);
int		print_higherhex(unsigned int n);
int		print_pointer(void *p);
int		print_percent(void);

int		ft_putnbr_hex(unsigned long num, char *base);
char	*ft_utoa(unsigned int n);

#endif 
