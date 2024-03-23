/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:02:23 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:57:23 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	issorted(t_list **sta)
{
	t_list	*firstnode;
	t_list	*secondnode;

	firstnode = *sta;
	secondnode = (*sta)->next;
	while (secondnode != NULL)
	{
		if (firstnode->data > secondnode->data)
			return (0);
		secondnode = secondnode->next;
		firstnode = firstnode->next;
	}
	return (1);
}
