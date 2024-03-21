/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:04:24 by juan-cas          #+#    #+#             */
/*   Updated: 2024/03/15 21:04:27 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdboo.h>

typedef struct t_list
{
	struct t_list	*next;
  struct t_list *prev;
	long			data;
	int				pos;
	int				fpos;
  int       push_price;
  bool      above_median;
  bool      cheapest;
  int       half;
	struct t_list	*stackA;
	struct t_list	*stackB;
  struct t_list *target_node;
}					t_list;


typedef enum {
  PA,
  PB,
  SA,
  SB,
  RA,
  RB,
  RR,
  RRA,
  RRB,
  RRR
} movements;

void				push_swap(t_list **stackA, t_list **stackB);

// error handling.
void				ft_error(void);
void				charfree(char **str);
void				lstfree(t_list **lst);

// movements
void				sa(t_list **stA, char c);
void				sb(t_list **stB, char c);
void				ss(t_list **stA, t_list **stB);
void				pb(t_list **stA, t_list **stB);
void				pa(t_list **stA, t_list **stB);
void				ra(t_list **stA, char c);
void				rb(t_list **stB, char c);
void				rr(t_list **stA, t_list **stB);
void				rra(t_list **stA, char c);
void				rrb(t_list **stB, char c);
void				rrr(t_list **stA, t_list **stB);

// Sorting
void				sort2(t_list **stackA);
void				sort3(t_list **stackA);
void				sort4(t_list **stacks, t_list **stackB);
void				bubblesort(t_list **lst);

// utils.
int           biggest(t_list **stA);
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
int					checker(char *str);
int					counter(char **args);
int					intcompare(t_list **stA);
int					lstcount(t_list **stack);
int					is_sorted(t_list **stackA);
int					ft_isdigit(int c);
int					ft_issign(int c);
int					ft_isspace(int c);
void				indexing(t_list **stack);
t_list				*parser(char **str);
t_list				*lstnew(long content);
t_list				*cleaner(char **argv);
t_list				*cleaner(char **argv);
t_list				*listcreator(char **matrix);
t_list        *lastnode(t_list **stack);
int           pibot(t_list **stack);

#endif
