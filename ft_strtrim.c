/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:09:07 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/13 20:22:04 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int	s;
	int	f;
	int	vlen;

	if (!s1 || !set)
		return (0);
	if (!(*s1))
		return (ft_strdup(""));
	s = 0;
	f = ft_strlen(s1);
	f--;
	while (ft_strchr(set, s1[s]) && s1[s])
		s++;
	while (ft_strchr(set, s1[f]) && s1[f])
		f--;
	vlen = f - s + 1;
	return (ft_substr(s1, s, vlen));
}
