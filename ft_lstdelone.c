/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:18:55 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:18:58 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//function to test the ft_lstdelone
static void	free_node(void *data)
{
	free(data);
}


//DUVIDA PRA CARALHOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
//é pra dar free no node após dar free no content
//com fazer isso sem dar free no next?
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
}


//main to test the ft_lstdelone
int main(void)
{
	t_list    *list;
    int        *num;

    list = ft_lstnew(num);
    *num = 42;
    ft_lstdelone(list, free_node);
    return (0);
}
