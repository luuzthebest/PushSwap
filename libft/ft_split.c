/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:21:19 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/26 01:30:36 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	cw(char *str, int counter, char c)
{
	while (*str)
	{
		if (*str != c)
		{
			counter++;
			while (*str && *str != c)
				str++;
		}
		else
		{
			str++;
		}
	}
	return (counter);
}

static void	*ft_clear(char **arr, int allocated)
{
	int	j;

	j = 0;
	while (j < allocated)
		free (arr[j++]);
	free (arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		ai;
	int		len;

	ai = 0;
	if (!s)
		return (NULL);
	arr = (char **)ft_calloc((cw((char *)s, 0, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			return (arr);
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		arr[ai++] = ft_substr(s, 0, len);
		if (!arr[ai - 1])
			return (ft_clear(arr, ai - 1));
		s += len;
	}
	return (arr);
}
