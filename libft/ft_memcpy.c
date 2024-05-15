/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:54:19 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:25:03 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes from memory area src to 
 * memory area dest.  
 * The memory areas must not overlap.  Use memmove(3) 
 * if the memory areas do overlap.
 * RETURN VALUE
 * The memcpy() function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*dest_ptr;
	const char		*src_ptr;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_ptr = ((char *)dest);
	src_ptr = ((const char *)src);
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
