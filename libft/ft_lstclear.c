/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:14:00 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/16 13:14:50 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swap;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		swap = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(swap, del);
	}
	*lst = NULL;
}
