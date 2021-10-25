/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:05:56 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/15 14:05:56 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_dst_size(char *dst, size_t size)
{
	unsigned int	i;

	i = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			src_size;

	j = 0;
	i = ft_dst_size(dst, size);
	src_size = ft_strlen(src);
	if (size <= i)
		return (size + src_size);
	else
	{
		while (i + j < size - 1 && src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + src_size);
}
