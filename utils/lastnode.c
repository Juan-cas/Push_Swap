/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastnode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:57:30 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:57:32 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lastnode(t_list **stack)
{
	t_list	*node;

	node = *stack;
	while (node->next != NULL)
		node = node->next;
	return (node);
}
