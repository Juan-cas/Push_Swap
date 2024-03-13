
#include "../push_swap.h"

void	lstadd_back(t_list **lst, t_list *n)
{
	t_list	*holder;

	if (!lst || !n)
		return ;
	if (!(*lst))
		*lst = n;
	else
	{
		holder = *lst;
		while (holder->next)
			holder = holder->next;
		holder->next = n;
	}
}
