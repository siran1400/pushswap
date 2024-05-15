/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:54:39 by siran             #+#    #+#             */
/*   Updated: 2023/11/26 13:11:06 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*ptr = (cast-type*)calloc(n, element-size);
 * here, n is the no. of elements and element-size is
 * the size of each element.*/

#include "libft.h"
/*
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = nmemb * size;
	ptr = (void *)malloc(i);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, i);
	return (ptr);
}
