/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:56:29 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/15 21:02:48 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*swap;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst)
	{
		swap = ft_lstlast(*lst);
		swap->next = new;
	}
	else
	{
		*lst = new;
	}
}
