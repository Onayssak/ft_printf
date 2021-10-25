/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:05:01 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/15 14:05:02 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert_n(char *str,
						size_t len,
						unsigned int n,
						unsigned int is_negative)
{
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

static size_t	ft_nlen(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	n /= 10;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			n_digits;
	unsigned int	is_negative;
	char			*str;

	n_digits = ft_nlen(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = n * -1;
	}
	str = malloc(sizeof(char) * (n_digits + 1));
	if (str == NULL)
		return (NULL);
	return (convert_n(str, n_digits, n, is_negative));
}
