/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 23:16:25 by wwatik            #+#    #+#             */
/*   Updated: 2022/11/28 22:30:20 by wwatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putstr(char *s)
{
	int	num;

	num = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s != '\0')
	{
		num += ft_putchar(*s);
		s++;
	}
	return (num);
}
