/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:25:03 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/13 20:09:47 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*src == 32 || (*src >= 9 && *src <= 13))
		src++;
	if (*src == '-')
	{
		sign = -1;
		src++;
	}
	else if (*src == '+') 
		src++;
	while (ft_isdigit(*src))
	{
		result *= 10;
		result += *src++ - '0';
	}
	return (result * sign);
}
