/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:42:43 by ozahdi            #+#    #+#             */
/*   Updated: 2023/10/31 21:44:49 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	if ((str >= '0' && str <= '9') || (str >= 'a' && str <= 'z')
		|| (str >= 'A' && str <= 'Z'))
	{
		return (1);
	}
	return (0);
}
