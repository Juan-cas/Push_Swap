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
<<<<<<< HEAD
  int   j;
=======
  int   AoB;
>>>>>>> bb9e5483d9a1a0f126aade6a6047ce4b2a905642

  j = lstcount(stack) / 2;
	i = 1;
  AoB = lstcount(stack) / 2;
	node = *stack;
	while (node != NULL)
	{
		node->pos = i;
<<<<<<< HEAD
    if (i <= j)
      node->above_median = false;
    else 
      node->above_median = true;
=======
    if (i <= AoB)
      node->half = 0;
    else 
      node->half = 1;
>>>>>>> bb9e5483d9a1a0f126aade6a6047ce4b2a905642
		node = node->next;
    i++;
	}
}
