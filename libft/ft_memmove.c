/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:09:36 by siran             #+#    #+#             */
/*   Updated: 2023/12/04 14:36:47 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  memmove()  function  copies  n bytes from memory area src to 
 * memory area dest.  The memory areas may overlap: copying takes 
 * place as though  the  bytes  in  src  are  first copied  into 
 * a temporary array that does not overlap src or dest, and the ytes 
 * are then copied from the temporary array to dest.
 * The memmove() function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest2;
	const char	*src2;

	if (src == dst)
		return (dst);
	dest2 = (char *)dst;
	src2 = (const char *)src;
	if (src2 < dest2 && src2 + len > dest2)
	{
		while (len--)
			*(dest2 + len) = *(src2 + len);
	}
	else
	{
		while (len--)
		{
			*dest2 = *src2;
			src2++;
			dest2++;
		}
	}
	return (dst);
}
/*
int	main()
{
	char dest[10] = "Happy";
	char src[] = "Whaaaat";
	//printf("%s", ft_memmove(dest, src, 8));
	ft_memmove(dest, src, 8);
	printf("%s", dest);
	return (0);
}*/
//if (dest != ft_memmove(dest, "consectetur", 5))
////    write(1, "dest's adress was not returned\n", 31);
// write(1, dest, 22);
//Expected (cat -e test01.output):
//conseipsum dolor sit a
//Your result (cat -e user_output_test01):
