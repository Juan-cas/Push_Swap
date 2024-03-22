/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:01:29 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 20:55:23 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*str;

	str = (void *)malloc(number * size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, number * size);
	return (str);
}
