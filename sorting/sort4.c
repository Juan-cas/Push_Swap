/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:45:01 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:45:04 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort4(t_list **stA, t_list **stB)
{
	t_list	*node;
	int		i;

	if (issorted(stA))
		return ;
	node = find_smallest(stA);
	i = where_small(stA, node);
	if (i == 2)
		sa(stA, 'p');
	else if (i == 3)
	{
		rra(stA, 'p');
		rra(stA, 'p');
	}
	else if (i == 4)
		rra(stA, 'p');
	pb(stA, stB);
	sort3(stA);
	pa(stA, stB);
}
