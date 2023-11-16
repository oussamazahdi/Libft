/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:03:54 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/06 18:45:16 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d == 0 && s == 0)
		return (0);
	if (d < s)
	{
		ft_memcpy(d, s, n);
		return (dest);
	}
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
