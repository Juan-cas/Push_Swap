/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:40:07 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:47:15 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	biggest(t_list **sta)
{
	long	highest;
	t_list	*node;

	node = *sta;
	highest = node->data;
	while (node->next != NULL)
	{
		if (highest < node->data)
			highest = node->data;
		node = node->next;
	}
	return (highest);
}
