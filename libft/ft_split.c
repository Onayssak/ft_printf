/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cajose-s <cajose-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:05:40 by cajose-s          #+#    #+#             */
/*   Updated: 2021/09/15 14:05:41 by cajose-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	quantity_delimiter(const char *s, char c)
{
	int	i;
	int	quantity;

	quantity = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			quantity++;
		i++;
	}
	return (quantity);
}

static size_t	strings_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i++);
}

static char	*string_dup(const char *s, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	*freesplit(char **tab, size_t stop)
{
	size_t	i;

	i = 0;
	while (i < stop)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	len;
	size_t	strings;
	size_t	i;

	if (s == NULL)
		return (NULL);
	strings = quantity_delimiter(s, c);
	tab = malloc((sizeof(char *) * (strings + 1)));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < strings)
	{
		len = strings_len(s, c);
		if (len)
		{
			tab[i] = string_dup(s, len);
			if (tab[i++] == NULL)
				return (freesplit(tab, i - 1));
		}
		s = s + len + 1;
	}
	tab[i] = NULL;
	return (tab);
}
