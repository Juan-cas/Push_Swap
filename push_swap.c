/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:04:36 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 21:04:38 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stackA, t_list **stackB)
{
	int	i;

	i = lstcount(stackA);
	listprinter(stackB, 'B');
	if (i == 2)
		sort2(stackA);
	if (i == 3)
		sort3(stackA);
	listprinter(stackA, 'A');
}
