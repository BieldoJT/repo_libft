#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;
	t_list *new_lst;

	aux = lst;
	while(aux->next != NULL)
	{
		f(aux->content);
		aux = aux->next;
	}
}
