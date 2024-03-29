/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:59:56 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:19 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stb, char c)
{
	t_list	*firstnode;
	t_list	*secondnode;

	if ((*stb)->next == NULL)
		return ;
	firstnode = *stb;
	secondnode = *stb;
	*stb = (*stb)->next;
	while (secondnode->next != NULL)
	{
		secondnode = secondnode->next;
	}
	firstnode->next = NULL;
	secondnode->next = firstnode;
	if (c == 'p')
		write(1, "rb", 2);
}
