/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:02:23 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 20:02:24 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	issorted(t_list **stA)
{
	t_list	*firstnode;
	t_list	*secondnode;

	firstnode = *stA;
	secondnode = (*stA)->next;
	while (secondnode != NULL)
	{
		if (firstnode->data > secondnode->data)
			return (0);
		secondnode = secondnode->next;
    firstnode = firstnode->next;
	}
	return (1);
}
