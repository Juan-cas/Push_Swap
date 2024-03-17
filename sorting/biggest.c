/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:40:07 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/17 17:40:16 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	biggest(t_list **stA)
{
	int		highest;
	t_list	*node;

	node = *stA;
	highest = node->data;
	while (node->next != NULL)
	{
		if (node->data < node->next->data)
			highest = node->next->data;
		node = node->next;
	}
	return (highest);
}
