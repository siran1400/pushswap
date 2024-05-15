/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:48:05 by siran             #+#    #+#             */
/*   Updated: 2023/12/11 12:48:43 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	w;
	int	i;

	w = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			w++;
		if (i > 0 && s[i] != c && s[i -1] == c)
			w++;
		i++;
	}
	return (w);
}

static char	**ft_malloc_str(char **str, const char *s, char c)
{
	int	count;
	int	i;
	int	x;

	count = 0;
	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		if ((s[i] == c && i > 0 && s[i - 1] != c)
			|| (s[i] != c && s[i + 1] == '\0'))
		{
			str[x] = malloc((count + 1) * sizeof(char));
			if (!str[x])
				return (NULL);
			count = 0;
			x++;
		}
		i++;
	}
	return (str);
}

static char	**ft_cpy_str(char **str, const char *s, char c)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	while (s[i])
	{
		if (s[i] != c)
			str[x][y++] = s[i];
		if (s[i] != c && s[i + 1] == '\0')
			str[x][y] = '\0';
		if (s[i] == c && i > 0 && s[i - 1] != c)
		{
			str[x][y] = '\0';
			x++;
			y = 0;
		}
		i++;
	}
	return (str);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free (str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		wordc;

	if (!s)
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		*str = NULL;
		return (str);
	}
	wordc = ft_count (s, c);
	str = malloc(sizeof(char *) * (wordc + 1));
	if (!str)
		return (NULL);
	if (ft_malloc_str (str, s, c))
	{
		ft_cpy_str (str, s, c);
		str[wordc] = NULL;
	}
	else
		str = ft_free(str);
	return (str);
}
/*

int	main()
{
	char const	s[] = "hellohappyworldh";
	char	c = 'l';
	char	**result = ft_split(s, c);
	int	i = 0;

	if (result)
	{
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
		i++;
		}
	}
	return (0);
}
*/
