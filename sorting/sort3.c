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

void	sort3(t_list **sta)
{
	t_list	*fn;
	t_list	*sn;
	int		highest;

	if (issorted(sta))
		return ;
	highest = biggest(sta);
	fn = *sta;
	sn = (*sta)->next;
	if (fn->data == highest)
		ra(sta, 'p');
	else if (sn->data == highest)
		rra(sta, 'p');
	fn = *sta;
	if ((*sta)->data > (*sta)->next->data)
		sa(sta, 'p');
}
