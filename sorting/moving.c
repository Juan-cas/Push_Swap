/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:02:03 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 21:02:04 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*pre_move(t_list **stA, t_list **stB)
{
	t_list	*nodeA;
	t_list	*Lnode;
	int		i;
	int		j;

	nodeA = *stA;
	nodeB = *stB;
	i = 1;
	while (nodeA->next != NULL && i++ <= 3)
	{
		if (nodeA->fpos < nodeA->next->fpos)
			j = i;
		nodeA = nodeA->next;
	}
	Lnode = lastnode(stA);
	i = 1;
	while (Lnode->prev != NULL && i++ <= 3)
	{
		if (Lnode->fpos < Lnode->prev->fpos && i < j)
			j = i * -1;
	}
}
