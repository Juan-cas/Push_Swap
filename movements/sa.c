/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:39 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:53 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **sta, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;

	if (*sta == NULL || (*sta)->next == NULL)
		return ;
	firstnode = *sta;
	secondnode = (*sta)->next->next;
	*sta = (*sta)->next;
	(*sta)->next = firstnode;
	firstnode->next = secondnode;
	if (c == 'p')
	{
		write(1, "sa\n", 3);
	}
}
