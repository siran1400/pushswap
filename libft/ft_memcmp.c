/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:53:36 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:24:29 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* The  memcmp()  function  compares the first n bytes (each interpreted a
 * s unsigned char) of the memory areas s1 and s2.
RETURN VALUE
The memcmp() function returns an integer less than,  equal  to,  or  greater
than  zero  if  the  first  n bytes of s1 is found, respectively, to be less
than, to match, or be greater than the first n bytes of s2.

For a nonzero return value, the sign is determined by the sign of  the  dif‐
ference  between the first pair of bytes (interpreted as unsigned char) that
differ in s1 and s2.
If n is zero, the return value is zero.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
