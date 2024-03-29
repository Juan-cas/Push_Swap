/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcreator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:02:42 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:47:56 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*listcreator(char **matrix)
{
	t_list	*sta;
	t_list	*node;
	int		i;

	i = -1;
	sta = NULL;
	while (matrix[++i])
	{
		node = lstnew(atol(matrix[i]));
		if (!node)
			silent_error();
		if (node->data < INT_MIN || node->data > INT_MAX)
			silent_error();
		lstadd_back(&sta, node);
	}
	return (sta);
}
