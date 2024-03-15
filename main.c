/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:04:30 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 21:04:32 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stackA;
	t_list	*stackB;

	if (argc < 2)
		return (ft_error(), 1);
	stackB = NULL;
	stackA = NULL;
	stackA = cleaner(argv);
	if (!stackA)
		return (1);
	bubblesort(&stackA);
	push_swap(&stackA, &stackB);
	lstfree(&stackA);
	return (0);
}
