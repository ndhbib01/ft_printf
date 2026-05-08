/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <<marvin@42.fr>>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:02:01 by hahabib           #+#    #+#             */
/*   Updated: 2026/05/07 14:35:57 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long num, char *base)
{
	int	len;

	len = 0;
	if (num >= 16)
		len += ft_putnbr_hex(num / 16, base);
	ft_putchar_fd(base[num % 16], 1);
	len += 1;
	return (len);
}
