/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:04:36 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:45:40 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **sta, t_list **stb)
{
	int	i;

	i = lstcount(sta);
	if (i == 2)
		sort2(sta);
	if (i == 3)
		sort3(sta);
	if (i == 4)
		sort4(sta, stb);
	if (i == 5)
		sort5(sta, stb);
	if (i > 5)
		sorter(sta, stb);
}
