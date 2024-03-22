/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:26 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:48 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_list **stA, t_list **stB)
{
	if (*stA == NULL || (*stA)->next == NULL)
		return ;
	if (*stB == NULL || (*stB)->next == NULL)
		return ;
	rra(stA, 'x');
	rrb(stB, 'x');
	write(1, "rrr", 3);
}
