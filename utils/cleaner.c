/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:01:46 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 20:01:48 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*cleaner(char **argv)
{
	char	**matrix;
	char	*str;
	int		i;
	char	*oldptr;
	t_list	*sta;

	i = 0;
	str = ft_calloc(1, 1);
	while (argv[++i])
	{
		oldptr = str;
		str = append(str, argv[i]);
		if (!str)
			return (NULL);
		if (oldptr != NULL)
			free(oldptr);
	}
	checker(str);
	matrix = ft_split(str, ' ');
	if (!matrix)
		return (free(str), NULL);
	sta = listcreator(matrix);
	intcompare(&sta);
	return (charfree(matrix), free(str), sta);
}
