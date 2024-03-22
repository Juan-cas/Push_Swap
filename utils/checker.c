/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:01:36 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 21:05:39 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checker(char *str)
{
	int	i;
	int	digitFound;
	int	length;

	digitFound = 0;
	i = -1;
	length = ft_strlen(str);
	while (str[++i] != '\0')
	{
		if (!ft_isspace(str[i]) && !ft_issign(str[i]) && !ft_isdigit(str[i]))
			return (1);
		if (ft_issign(str[i]))
		{
			if (i + 1 <= length && !ft_isdigit(str[i + 1]))
				return (1);
			if (i > 0 && str[i - 1] != ' ')
				return (1);
		}
		if (ft_isdigit(str[i]))
			digitFound++;
	}
	if (digitFound > 0)
		return (0);
	return (ft_error(), 1);
}
