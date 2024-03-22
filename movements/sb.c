/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:45 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:59 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list **stB, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;

	if (*stB == NULL || (*stB)->next == NULL)
		return ;
	firstnode = *stB;
	secondnode = (*stB)->next->next;
	*stB = (*stB)->next;
	(*stB)->next = firstnode;
	firstnode->next = secondnode;
	if (c == 'p')
		write(1, "sb", 2);
}
