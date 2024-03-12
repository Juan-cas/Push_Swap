
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <limits.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct t_list {
  struct t_list *next;
  int data;
  int pos;
  int fpos;
  struct t_list *stackA;
  struct t_list *stackB;
} t_list;

void push_swap(t_list **stackA, t_list **stackB);

// movements
void sa(t_list **stackA);
void sb(t_list **stackB);
void ss(t_list **stackA, t_list **stackB);
void pb(t_list **stackA, t_list **stackB);
void pa(t_list **stackA, t_list **stackB);
void ra(t_list **stackA);
void rb(t_list **stackB);
void rr(t_list **stackA, t_list **stackB);
void rra(t_list **stackA);
void rrb(t_list **stackB);
void rrr(t_list **stackA, t_list **stackB);

// error handling.
void ft_error();
void charfree(char **str);
void lstclear(t_list **lst);

// utils.
int ft_atoi(const char *str, int *safeguard);
size_t ft_strlen(const char *str);
char *append(char *s1, char const *s2);
char **ft_split(char const *s, char c);
void *ft_memset(void *s, int c, size_t n);
void *ft_calloc(size_t number, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t sizedest);
int counter(char **args);
int int_compare(t_list *lst);
int ft_lstcount(t_list **stack);
void listprinter(t_list **lst);
int is_sorted(t_list **stackA);

// parsing.
t_list *parser(char **str);
void ft_lstadd_back(t_list **lst, t_list *n);
void ft_lstclear(t_list **lst, void (*del)(void *));
t_list *ft_lstnew(int content);
char **cleaner(char **argv);
int checker(char *argv);
int int_compare(t_list *lst);
char **cleaner(char **argv);
int listcreator(t_list **stackA, char**matrix);


// Sorting
void ft_sort2(t_list **stackA);
void ft_sort3(t_list **stackA, t_list **stackB);
void ft_sort4(t_list **stacks, t_list **stackB);
int ft_finder(t_list *stacks);
void ft_bubble(t_list **lst);



#endif
