/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:45:23 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:49:23 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*find_smallest(t_list **stack)
{
	t_list	*nodea;
	t_list	*final_node;
	int		i;

	i = 1;
	while (i < 3)
	{
		nodea = *stack;
		final_node = NULL;
		while (nodea != NULL)
		{
			if (nodea->fpos == i)
			{
				final_node = nodea;
				return (final_node);
			}
			nodea = nodea->next;
		}
		i++;
	}
	return (final_node);
}
