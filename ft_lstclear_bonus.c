/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:04:08 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/28 20:34:34 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*new;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		new = current -> next;
		del(current -> content);
		free(current);
		current = new;
	}
	*lst = (NULL);
}
