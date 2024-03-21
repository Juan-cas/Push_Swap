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
	t_list	*stA;

	i = 0;
	str = ft_calloc(1, 1);
	stA = NULL;
	while (argv[++i])
	{
		oldptr = str;
		str = append(str, argv[i]);
		if (!str)
			return (NULL);
		if (oldptr != NULL)
			free(oldptr);
	}
	if (checker(str))
		ft_error();
	matrix = ft_split(str, ' ');
	if (!matrix)
		return (free(str), NULL);
	stA = listcreator(matrix);
	if (!stA)
		return (charfree(matrix), NULL);
	if (intcompare(&stA))
		return (charfree(matrix), lstfree(&stA), NULL);
	return (charfree(matrix), free(str), stA);
}
