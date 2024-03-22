/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:49:06 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:49:07 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_cost(t_list **stA, t_list **stB)
{
	long	la;
	long	lb;
	t_list	*nodeB;

	la = lstcount(stA);
	lb = lstcount(stB);
	nodeB = *stB;
	while (nodeB)
	{
		nodeB->push_cost = nodeB->pos;
		if (!(nodeB->above_median))
			b->push_price = lb - (nodeB->pos);
		if (nodeB->target_node->above_median)
			nodeB->push_price += nodeB->target_node->pos;
		else
			nodeB->push_price += la - (nodeB->target_node->pos);
		nodeB = nodeB->next;
	}
}
