/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:45:10 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:45:13 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort5(t_list **sta, t_list **stb)
{
	t_list	*node;
	int		i;

	if (issorted(sta))
		return ;
	node = find_smallest(sta);
	i = where_small(sta, node);
	if (i == 2)
		sa(sta, 'p');
	else if (i == 3)
	{
		ra(sta, 'p');
		sa(sta, 'p');
	}
	else if (i == 4)
	{
		rra(sta, 'p');
		rra(sta, 'p');
	}
	else if (i == 5)
		rra(sta, 'p');
	pb(sta, stb);
	sort4(sta, stb);
	pa(sta, stb);
}
