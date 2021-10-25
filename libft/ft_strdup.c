/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:05:46 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/15 14:05:46 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		size;

	size = ft_strlen(s) + 1;
	s2 = (char *)malloc(size);
	if (s2)
		ft_strlcpy(s2, (char *)s, size);
	return (s2);
}
