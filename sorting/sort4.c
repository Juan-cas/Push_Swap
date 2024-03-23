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

void	sort4(t_list **sta, t_list **stb)
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
		rra(sta, 'p');
		rra(sta, 'p');
	}
	else if (i == 4)
		rra(sta, 'p');
	pb(sta, stb);
	sort3(sta);
	pa(sta, stb);
}
