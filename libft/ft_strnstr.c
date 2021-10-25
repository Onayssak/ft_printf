/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:06:11 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/15 14:06:11 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	i;

	i = 0;
	little_size = ft_strlen(little);
	if (*little == 0)
		return ((char *)big);
	while (big[i] && (i <= len))
	{
		if ((ft_strncmp(&big[i], little, little_size) == 0)
			&& (i + little_size <= len))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
