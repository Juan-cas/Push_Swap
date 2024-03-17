/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:59:31 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 19:59:34 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **stA, t_list **stB)
{
	t_list	*firstnode;

	if (*stB == NULL)
		return ;
	firstnode = *stB;
	*stB = (*stB)->next;
  *stB->prev = NULL;
	firstnode->next = *stA;
	*stA = firstnode;
	write(1, "pa", 2);
}
