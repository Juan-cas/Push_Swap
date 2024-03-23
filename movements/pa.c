/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:59:31 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:46:06 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **sta, t_list **stb)
{
	t_list	*firstnode;

	if (*stb == NULL)
		return ;
	firstnode = *stb;
	*stb = (*stb)->next;
	firstnode->next = *sta;
	*sta = firstnode;
	write(1, "pa\n", 3);
}
