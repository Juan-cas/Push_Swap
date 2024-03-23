/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:18 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:37 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **stb, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;
	t_list	*prevnode;

	if (*stb == NULL || (*stb)->next == NULL)
		return ;
	firstnode = *stb;
	secondnode = *stb;
	while (secondnode->next != NULL)
	{
		prevnode = secondnode;
		secondnode = secondnode->next;
	}
	prevnode->next = NULL;
	secondnode->next = firstnode;
	firstnode->prev = secondnode;
	secondnode->prev = NULL;
	*stb = secondnode;
	if (c == 'p')
		write(1, "rrb", 3);
}
