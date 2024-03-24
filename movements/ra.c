/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:59:48 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 21:05:14 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **sta, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;

	if ((*sta)->next == NULL)
		return ;
	firstnode = *sta;
	secondnode = *sta;
	while (secondnode->next != NULL)
		secondnode = secondnode->next;
	*sta = (*sta)->next;
	secondnode->next = firstnode;
	firstnode->next = NULL;
	if (c == 'p')
		write(1, "ra\n", 3);
}
