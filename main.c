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
	t_list	*sta;
	t_list	*stb;

	if (argc < 2)
		return (ft_error(), 1);
	stb = NULL;
	sta = NULL;
	sta = cleaner(argv);
	if (!sta)
		return (1);
	bubblesort(&sta);
	push_swap(&sta, &stb);
	lstfree(&sta);
	return (0);
}
