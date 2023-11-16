/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:32:52 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/08 10:56:13 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *tofinde, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!src && !n)
		return (0);
	if (tofinde[i] == '\0')
		return ((char *)src);
	while (src[i] && i < n)
	{
		if (tofinde[j] == src[i])
		{
			while (src[i + j] == tofinde[j] && (i + j) < n)
			{
				if (tofinde[j + 1] == '\0')
					return ((char *)src + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
