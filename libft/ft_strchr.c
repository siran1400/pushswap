/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:02:51 by siran             #+#    #+#             */
/*   Updated: 2023/12/10 13:26:27 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The  strchr()  function  returns  a  pointer to the first occurrence 
 *  of the character c in the string s.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		i = ft_strlen(s);
		return ((char *)s + i++);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)s + i);
	return (NULL);
}
