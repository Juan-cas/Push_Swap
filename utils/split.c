/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:03:48 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 21:03:51 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	cleanup(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
		free(lst[i++]);
	free(lst);
}

static char	**filler(const char *s, char **lst, char c)
{
	size_t	word_len;
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			word_len = 0;
			while (s[word_len] != '\0' && s[word_len] != c)
				word_len++;
			lst[i] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!lst[i])
			{
				return (cleanup(lst), NULL);
			}
			ft_strlcpy(lst[i], s, word_len + 1);
			i++;
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		wordcount;

	if (!s)
		return (NULL);
	wordcount = ft_countword(s, c);
	lst = (char **)malloc((wordcount + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	if (!filler(s, lst, c))
		return (NULL);
	return (lst);
}
