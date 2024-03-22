/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:06:16 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:49:15 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lstnew(long content)
{
	t_list	*big_list;

	big_list = (t_list *)malloc(sizeof(t_list));
	if (!big_list)
		return (NULL);
	big_list->data = content;
	big_list->next = NULL;
	big_list->prev = NULL;
	return (big_list);
}
