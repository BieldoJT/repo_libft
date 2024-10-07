/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:21:29 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:21:31 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
