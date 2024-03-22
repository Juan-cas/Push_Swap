/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:00:03 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:26 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_list **stA, t_list **stB)
{
	if ((*stA)->next == NULL || (*stB)->next == NULL)
		return ;
	ra(stA, 'x');
	rb(stB, 'x');
	write(1, "rr", 2);
}
