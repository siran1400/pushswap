/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:22:29 by siran             #+#    #+#             */
/*   Updated: 2023/12/09 11:44:44 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	str;
	size_t	end;

	str = 0;
	end = ft_strlen(s1);
	while (s1[str] && ft_char_in_set(s1[str], set))
		str++;
	while (end > str && ft_char_in_set(s1[end -1], set))
		end--;
	res = (char *)malloc(((end - str) * sizeof (char)) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (str < end)
		res[i++] = s1[str ++];
	res[i] = '\0';
	return (res);
}
