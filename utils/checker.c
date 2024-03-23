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

void	checker(char *str)
{
	int	i;
	int	digit_found;
	int	length;

	digit_found = 0;
	i = -1;
	length = ft_strlen(str);
	while (str[++i] != '\0')
	{
		if (!ft_isspace(str[i]) && !ft_issign(str[i]) && !ft_isdigit(str[i]))
			ft_error();
		if (ft_issign(str[i]))
		{
			if (i + 1 <= length && !ft_isdigit(str[i + 1]))
				ft_error();
			if (i > 0 && str[i - 1] != ' ')
				ft_error();
		}
		if (ft_isdigit(str[i]))
			digit_found++;
	}
	if (digit_found > 0)
		return ;
	ft_error();
}
