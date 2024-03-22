/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pibot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:55:34 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:55:36 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pibot(t_list **stack)
{
	t_list	*node;
	int		j;
	int		i;

	i = 0;
	node = *stack;
	while (node->next != NULL)
	{
		if (node->fpos < node->next->fpos)
			i = node->next->fpos;
		node = node->next;
	}
	j = i / 2;
	return (j);
}
