/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcreator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:02:42 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 20:03:20 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*listcreator(char **matrix)
{
	t_list	*stA;
	t_list	*node;
	int		i;

	i = -1;
	stA = NULL;
	while (matrix[++i])
	{
		node = lstnew(atol(matrix[i]));
		if (!node)
			return (free(node), lstfree(&stA), NULL);
		if (node->data < INT_MIN || node->data > INT_MAX)
			return (free(node), lstfree(&stA), NULL);
		lstadd_back(&stA, node);
	}
	return (stA);
}
