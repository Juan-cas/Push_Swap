/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   where_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:48:41 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:48:59 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	where_small(t_list **sta, t_list *node)
{
	t_list	*comparer;
	int		i;

	comparer = *sta;
	i = 1;
	while (comparer)
	{
		if (comparer->data != node->data)
			i++;
		if (comparer->data == node->data)
			break ;
		comparer = comparer->next;
	}
	return (i);
}
