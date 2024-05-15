/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:13:25 by siran             #+#    #+#             */
/*   Updated: 2023/12/04 15:28:17 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* The  strcmp()  function  compares the two strings s1 and s2.
 * strcmp() returns an integer indicating the result of the comparison, 
 * as follows:
 * • 0, if the s1 and s2 are equal;
 * • a negative value if s1 is less than s2;
 * • a positive value if s1 is greater than s2.
 * The  strncmp()  function is similar, except it compares only the first 
 * (at most) n bytes of s1 and s2. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		if ((s1[i] == '\0') || (s2[i] == '\0'))
			break ;
		i++;
	}
	return (0);
}
