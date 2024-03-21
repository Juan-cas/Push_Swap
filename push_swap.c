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

void	push_swap(t_list **stA, t_list **stB)
{
	int	i;

	i = lstcount(stA);
	if (i == 2)
		sort2(stA);
	if (i == 3)
		sort3(stA);
  if (i == 4)
    sort4(stA, stB);
  if (i == 5)
    sort5(stA, stB);
  listprinter(stA, 'A');
}
