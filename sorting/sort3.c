/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:01:01 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 21:01:03 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort3(t_list **stA)
{
	t_list	*fn;
	t_list	*sn;
	int		highest;

	if (issorted(stA))
		return ;
	highest = biggest(stA);
	fn = *stA;
	sn = (*stA)->next;
	if (fn->data == highest)
		ra(stA, 'p');
	else if (sn->data == highest)
		rra(stA, 'p');
	fn = *stA;
	if ((*stA)->data > (*stA)->next->data)
		sa(stA, 'p');
}
