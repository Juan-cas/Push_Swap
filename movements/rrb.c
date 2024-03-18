/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:18 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 20:00:19 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **stB, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;
	t_list	*prevnode;

	if (*stB == NULL || (*stB)->next == NULL)
		return ;
	firstnode = *stB;
	secondnode = *stB;
	while (secondnode->next != NULL)
	{
		prevnode = secondnode;
		secondnode = secondnode->next;
	}
	prevnode->next = NULL;
	secondnode->next = firstnode;
  firstnode->prev = secondnode;
  secondnode->prev = NULL;
	*stB = secondnode;
	if (c == 'p')
		write(1, "rrb", 3);
}
