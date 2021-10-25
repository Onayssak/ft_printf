/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:06:52 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/16 11:06:58 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*swap;

	if (lst == NULL || f == NULL)
		return ;
	swap = lst;
	while (swap)
	{
		(*f)(swap->content);
		swap = swap->next;
	}
}
