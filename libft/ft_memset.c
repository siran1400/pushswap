/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:28:06 by siran             #+#    #+#             */
/*   Updated: 2023/12/03 16:26:29 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*  The  memset()  function  fills the first n bytes of the memory area 
 *  pointed to by s with the constant byte c.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
