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
  if (!stack)
    return ;
	t_list	*node;
	int		i;
  int   j;

  j = lstcount(stack) / 2;
	i = 0;
	node = *stack;
	while (node != NULL)
	{
		node->pos = i;
    if (i <= j)
      node->above_median = false;
    else 
      node->above_median = true;
		node = node->next;
    i++;
	}
}
