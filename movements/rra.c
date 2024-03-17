/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:11 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 20:00:12 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stA, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;
	t_list	*prevnode;

	if (*stA == NULL || (*stA)->next == NULL)
		return ;
	firstnode = *stA;
	secondnode = *stA;
	while (secondnode->next != NULL)
	{
		prevnode = secondnode;
		secondnode = secondnode->next;
	}
	prevnode->next = NULL;
	secondnode->next = firstnode;
  firstnode->prev = secondnode;
  secondnode->prev = NULL;
	*stA = secondnode;
	if (c == 'p')
		write(1, "rra", 3);
}
