/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siran <siran@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:13:32 by siran             #+#    #+#             */
/*   Updated: 2023/12/10 13:25:26 by siran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strdup() function returns a pointer to a new string which 
 * is a duplicate of the string s.
 * Memory for the new string is obtained with malloc(3), 
 * and can be freed with free(3).*/

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
char	*ft_strdup(const char *s)
{
	char	*sc;
	size_t	i;

	sc = (char *)malloc(ft_strlen(s) + 1);
	if (!sc)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sc[i] = s[i];
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
