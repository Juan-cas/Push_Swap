/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:39 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 20:00:40 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stA, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;

	if (*stA == NULL || (*stA)->next == NULL)
		return ;
	firstnode = *stA;
	secondnode = (*stA)->next->next;
	*stA = (*stA)->next;
	(*stA)->next = firstnode;
	firstnode->next = secondnode;
	write(1, "hola", 4);
	if (c == 'p')
	{
		write(1, "sa", 2);
	}
}
