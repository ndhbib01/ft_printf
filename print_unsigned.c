/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <<marvin@42.fr>>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:57:12 by hahabib           #+#    #+#             */
/*   Updated: 2026/05/04 13:49:04 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	char	*string;
	int		len;

	string = ft_utoa(n);
	if (!string)
		return (0);
	ft_putstr_fd(string, 1);
	len = ft_strlen(string);
	free(string);
	return (len);
}
