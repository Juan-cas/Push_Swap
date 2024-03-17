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
  int   AoB;

	i = 1;
  AoB = lstcount(stack) / 2;
	node = *stack;
	while (node != NULL)
	{
		node->pos = i;
    if (i <= AoB)
      node->half = 0;
    else 
      node->half = 1;
		node = node->next;
    i++;
	}
}
