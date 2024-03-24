/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:11 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:32 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **sta, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;
	t_list	*prevnode;

	if (*sta == NULL || (*sta)->next == NULL)
		return ;
	firstnode = *sta;
	secondnode = *sta;
	while (secondnode->next != NULL)
	{
		prevnode = secondnode;
		secondnode = secondnode->next;
	}
	prevnode->next = NULL;
	secondnode->next = firstnode;
	*sta = secondnode;
	if (c == 'p')
		write(1, "rra\n", 4);
}
