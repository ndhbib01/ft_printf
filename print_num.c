/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <<marvin@42.fr>>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:26 by hahabib           #+#    #+#             */
/*   Updated: 2026/04/29 23:16:07 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_num(int n)
{
	char	*string;
	int		len;

	string = ft_itoa(n);
	if (!string)
		return (0);
	ft_putstr_fd(string, 1);
	len = ft_strlen(string);
	free(string);
	return (len);
}
