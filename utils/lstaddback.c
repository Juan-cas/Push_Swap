/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddback.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:03:26 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:57:47 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lstadd_back(t_list **lst, t_list *n)
{
	t_list	*holder;

	if (!lst || !n)
		return ;
	if (!(*lst))
		*lst = n;
	else
	{
		holder = *lst;
		while (holder->next)
			holder = holder->next;
		holder->next = n;
		n->prev = holder;
	}
}
