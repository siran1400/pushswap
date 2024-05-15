/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:41:47 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:03:11 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* The  bzero() function erases the data in the n 
 * bytes of the memory starting at the location pointed 
 * to by s, by writing zeros (bytes containing '\0') to that area. */

#include "libft.h"

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
