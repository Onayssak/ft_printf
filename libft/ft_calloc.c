/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:04:33 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/15 14:04:33 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*memory;
	size_t	total_bytes;
	int		fill_bytes;

	total_bytes = nmemb * size;
	fill_bytes = 0;
	memory = malloc(total_bytes);
	if (memory == NULL)
		return (NULL);
	if (total_bytes > 2147483647)
		return (NULL);
	ft_memset(memory, fill_bytes, total_bytes);
	return ((void *)memory);
}
