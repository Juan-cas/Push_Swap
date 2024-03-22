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

static int	max_bits(t_list **stA)
{
	t_list	*node;
	int		max;
	int		max_bits;

	node = *stA;
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

void	sorter(t_list **stA, t_list **stB)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		mbits;

	i = 0;
	head_a = *stA;
	size = lstcount(stA);
	mbits = max_bits(stA);
	while (i < mbits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stA;
			if (((head_a->fpos >> i) & 1) == 1)
				ra(stA, 'p');
			else
				pb(stA, stB);
		}
		while (lstcount(stB) != 0)
			pa(stA, stB);
		i++;
	}
}
