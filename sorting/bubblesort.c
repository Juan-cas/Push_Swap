/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:58 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:47:20 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	bubblesort(t_list **stA)
{
	t_list	*comparer;
	t_list	*compared;
	int		i;

	comparer = *stA;
	while (comparer != NULL)
	{
		compared = *stA;
		i = 1;
		while (compared != NULL)
		{
			if (comparer->data > compared->data)
				i++;
			compared = compared->next;
		}
		comparer->fpos = i;
		comparer = comparer->next;
	}
}
