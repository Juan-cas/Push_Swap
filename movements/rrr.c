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

void	rrr(t_list **sta, t_list **stb)
{
	if (*sta == NULL || (*sta)->next == NULL)
		return ;
	if (*stb == NULL || (*stb)->next == NULL)
		return ;
	rra(sta, 'x');
	rrb(stb, 'x');
	write(1, "rrr", 3);
}
