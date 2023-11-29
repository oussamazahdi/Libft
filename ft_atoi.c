/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:25:03 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/29 12:34:14 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	int				sign;
	long long		result;
	long long		t;

	sign = 1;
	result = 0;
	while (*src == 32 || (*src >= 9 && *src <= 13))
		src++;
	if (*src == '+' || *src == '-')
	{
		if (*src == '-')
			sign = -1;
		src++;
	}
	while (*src >= '0' && *src <= '9')
	{
		t = result;
		result *= 10;
		result += *src++ - '0';
		if (result / 10 != t && sign == 1)
			return (-1);
		else if (result / 10 != t && sign == -1)
			return (0);
	}
	return (result * sign);
}
