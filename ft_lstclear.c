#include "libft.h"

static void	free_node(void *data)
{
	t_list	*node;
	node = (t_list *)data;
	free(node->content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	//duvida: eu passo na lista toda ou uso uma auxiliar?
	t_list	*aux;

	aux = *lst;
	while(aux->next != NULL)
	{
		free_node(aux);
		aux = aux->next;
	}
}
