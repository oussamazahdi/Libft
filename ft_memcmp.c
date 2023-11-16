/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:23:16 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/08 11:03:33 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*v1;
	unsigned char	*v2;

	if (n == 0)
		return (0);
	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	while (*v1 == *v2 && --n > 0)
	{
		v1++;
		v2++;
	}
	return ((int)(*v1 - *v2));
}
