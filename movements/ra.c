/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:59:48 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 19:59:49 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stA, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;

	if ((*stA)->next == NULL)
		return ;
	firstnode = *stA;
	secondnode = *stA;
	while (secondnode->next != NULL)
	{
		secondnode = secondnode->next;
	}
	*stA = (*stA)->next;
  *stA->prev = NULL;
	secondnode->next = firstnode;
	firstnode->next = NULL;
  firstnode->prev = secondnode;
	if (c == 'p')
		write(1, "ra", 2);
}
