/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:04:24 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/22 21:07:07 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_list
{
	struct t_list	*next;
	long			data;
	int				fpos;
	struct t_list	*stacka;
	struct t_list	*stackb;
}					t_list;

void				push_swap(t_list **stackA, t_list **stackB);

// error handling.
void				ft_error(void);
void				charfree(char **str);
void				lstfree(t_list **lst);
void				silent_error(void);

// movements
void				sa(t_list **sta, char c);
void				sb(t_list **stb, char c);
void				ss(t_list **sta, t_list **stb);
void				pb(t_list **sta, t_list **stb);
void				pa(t_list **sta, t_list **stb);
void				ra(t_list **sta, char c);
void				rb(t_list **stb, char c);
void				rr(t_list **sta, t_list **stb);
void				rra(t_list **sta, char c);
void				rrb(t_list **stb, char c);
void				rrr(t_list **sta, t_list **stb);

// Sorting
void				sorter(t_list **sta, t_list **stb);
void				sort2(t_list **stackA);
void				sort3(t_list **stackA);
void				sort4(t_list **stacks, t_list **stackB);
void				bubblesort(t_list **lst);
void				sort4(t_list **sta, t_list **stb);
void				sort5(t_list **sta, t_list **stb);

// utils.
int					where_small(t_list **sta, t_list *node);
t_list				*find_smallest(t_list **stack);
long				biggest(t_list **sta);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dest, const char *src, size_t sizedest);
long				ft_atol(const char *str);
char				*append(char *s1, char const *s2);
char				**ft_split(char const *s, char c);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_calloc(size_t number, size_t size);
void				listprinter(t_list **stack, char c);
void				ft_bzero(void *s, size_t n);
void				ft_putnbr(int n);
void				lstadd_back(t_list **lst, t_list *n);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				checker(char *str);
int					counter(char **args);
void				intcompare(t_list **sta);
int					lstcount(t_list **stack);
int					issorted(t_list **stackA);
int					ft_isdigit(int c);
int					ft_issign(int c);
int					ft_isspace(int c);
void				indexing(t_list **stack);
t_list				*parser(char **str);
t_list				*lstnew(long content);
t_list				*cleaner(char **argv);
t_list				*cleaner(char **argv);
t_list				*listcreator(char **matrix);
t_list				*lastnode(t_list **stack);
int					pibot(t_list **stack);

#endif
