/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listprinter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:05:59 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 21:06:01 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	listprinter(t_list **stack, char c)
{
	t_list	*node;

	node = *stack;
	write(1, "stack:", 6);
	write(1, &c, 1);
	write(1, "\n", 1);
	while (node != NULL)
	{
		ft_putnbr(node->data);
		write(1, "\n", 1);
		node = node->next;
	}
}
