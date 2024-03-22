/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstcount.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:03:35 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 21:03:19 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lstcount(t_list **stack)
{
	int		i;
	t_list	*node;

	if (!stack)
		return (0);
	i = 0;
	node = *stack;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
