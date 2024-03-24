/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:59:39 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:12 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **sta, t_list **stb)
{
	t_list	*firstnode;

	if (*sta == NULL)
		return ;
	firstnode = *sta;
	*sta = (*sta)->next;
	firstnode->next = *stb;
	*stb = firstnode;
	write(1, "pb\n", 3);
}
