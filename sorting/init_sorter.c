/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sorter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:44:49 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:47:27 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	max_bits(t_list **sta)
{
	t_list	*node;
	int		max;
	int		max_bits;

	node = *sta;
	max = node->fpos;
	max_bits = 0;
	while (node)
	{
		if (node->fpos > max)
			max = node->fpos;
		node = node->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sorter(t_list **sta, t_list **stb)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		mbits;

	i = 0;
	size = lstcount(sta);
	mbits = max_bits(sta);
	while (i < mbits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *sta;
			if (((head_a->fpos >> i) & 1) == 1)
				ra(sta, 'p');
			else
				pb(sta, stb);
		}
		while (lstcount(stb) != 0)
			pa(sta, stb);
		i++;
	}
}
