#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*aux;

	count = 0;
	//should I create an aux list to calculate de length?
	aux = lst;
	while(aux->next != NULL)
		count++;
	return (count);
}
