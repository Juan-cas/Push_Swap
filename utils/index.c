/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:01:53 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 20:01:54 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	indexing(t_list **stack)
{
	t_list	*node;
	int		i;

	i = 1;
	node = *stack;
	while (node != NULL)
	{
		node->pos = i;
		node = node->next;
	}
}
