/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:27:30 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/16 11:27:31 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*element;

	if (!lst)
		return (NULL);
	new_element = NULL;
	while (lst)
	{
		element = ft_lstnew((*f)(lst->content));
		if (!element)
			ft_lstclear(&element, (*del));
		else
			ft_lstadd_back(&new_element, element);
		lst = lst->next;
	}
	return (new_element);
}
