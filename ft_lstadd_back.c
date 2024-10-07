/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:18:15 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:18:18 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;

	if(*lst = NULL)
		*lst = new;
	else
	{
		aux = *lst;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
		new->next = NULL;
	}
}
