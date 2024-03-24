/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intcompare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:02:00 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 20:02:01 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	intcompare(t_list **sta)
{
	t_list	*comparer;
	t_list	*compared;

	comparer = *sta;
	while (comparer->next != NULL)
	{
		compared = comparer->next;
		while (compared != NULL)
		{
			if (compared->data == comparer->data)
				ft_error();
			compared = compared->next;
		}
		comparer = comparer->next;
	}
}
