/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:59:39 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 19:59:41 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **stA, t_list **stB)
{
	t_list	*firstnode;

	if (*stA == NULL)
		return ;
	firstnode = *stA;
	*stA = (*stA)->next;
	firstnode->next = *stB;
	*stB = firstnode;
	write(1, "pb", 2);
}
