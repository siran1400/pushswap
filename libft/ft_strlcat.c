/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:28:04 by siran             #+#    #+#             */
/*   Updated: 2023/12/09 10:32:25 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srcl;
	size_t	dstl;
	size_t	n;

	i = 0;
	srcl = 0;
	dstl = 0;
	n = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (size <= dstl)
		return (size + srcl);
	n = dstl;
	while ((n + i < size - 1) && (src[i] != '\0'))
	{
		dst[n + i] = src[i];
		i++;
	}
	dst[n + i] = '\0';
	return (srcl + dstl);
}
/*
int	main ()
{
	char *dest = "Happy";
	char *src = "World";

	printf("%zu",ft_strlcat (dest, src, 7));
	printf("%s", dest);
}*/
