/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:13:20 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/17 15:28:48 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*u;
	unsigned char	*v;

	v = (unsigned char *)dest;
	u = (unsigned char *)src;
	i = 0;
	if (!u && !v)
		return (NULL);
	if (v != u)
	{
		while (i < n)
		{
			v[i] = u[i];
			i++;
		}
	}
	return (dest);
}
